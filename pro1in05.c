#include <stdio.h>
#include <stdlib.h>

/*����2�s�̓t�@�C���̓��o�͂��s�����߂̕��ł��B����͖������Ă��������B*/
int filein(float m[]);
void fileout(float m[], int n);

int main(void)
{
	float btemp[365];
	int i;
	int n;
	
	n = filein(btemp); /*�t�@�C������f�[�^�̓ǂݍ���*/

	
/*
	��������
*/
	printf("メニュー:\n1.入力\n2.表示\n");

	printf(">>");
	scanf("%d",&x);

	switch(x){
		case 1: printf("入力>>");
		case 2: printf("表示>>");
	}

	for (i = 0; i < n; i++){
		printf("%.2f\n", btemp[i]);
	}

/*
	�����܂ł��쐬����B
*/


	
	fileout(btemp, n); /*�I���O�Ƀt�@�C���֏�������*/
	
	return (0);
}


/*
	�ȉ��̃v���O�����̓t�@�C���̓��o�͂��s�����߂̂��̂ł��B
	����͖������Č��\�ł��B
*/
int filein(float m[])
{
	FILE *fp;
	int n = 0;
	
	fp = fopen("BodyTemp.csv", "r");
	if (fp != NULL){
		while (fscanf(fp, "%f", &m[n]) != EOF){
			n++;
		}
		
		fclose(fp);
	}
	
	return (n);
}

void fileout(float m[], int n)
{
	FILE *fp;
	int i;
	fp = fopen("BodyTemp.csv", "w");

	for (i = 0; i < n; i++){
		fprintf(fp, "%f\n", m[i]);
	}
	
	fclose(fp);
}
