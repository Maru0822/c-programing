#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100	/*データ数*/
#define N 100	/*繰返し回数*/

int makeData(int mat[]);
void shuffleData(int mat[]);
int linear_search(int mat[], int key);

int main(void)
{
	int data[SIZE];
	int i;
	int max;
	int no, total;
	int key;

	srand(time(NULL));

	total = 0;
	for (i = 0; i < N; i++){
		max = makeData(data);	/*データ配列の生成*/
		
		key = rand() % (int)(SIZE * 1.1);
		no = linear_search(data, key);
		
		total += no;
	}
	
	printf("平均処理回数は[ %.3f ]です。\n", (double)total / N);

	return (0);
}

/*****************************************************
* Linear search function
* @author	t.tamaki
* @param	mat[] : array for sorting
* @param	key : search key
* @return	number of searching
******************************************************/
int linear_search(int mat[], int key)
{
	
	int j;

	for (j = 0; j < SIZE; j++){
		
		if (mat[j] == key){
			printf("%d回目\n",j+1);   //基本n/2回で見つかる（今回の場合100/2で50回）
			break;
		}
	}
	if (j == SIZE){
		printf("存在しない");
	}

	return (j+1);
}


/*****************************************************
* Generate array of random number
* @author	t.tamaki
* @param	mat[] : array for sorting
* @return	maximum value in generated array
******************************************************/
int makeData(int mat[])
{
	int i, n;
	
	for (i = 0; i < SIZE; i++) {
		mat[i] = i + 1;
	}
	
	shuffleData(mat);
	
	return (n);
}

/*****************************************************
* Shuffle the number in array
* @author	t.tamaki
* @param	mat[] : array for sorting
* @return	void
******************************************************/
void shuffleData(int mat[])
{
	int n;
	int r;
	int tmp;
	
	n = SIZE-1;
	
	while (n--){
		r = rand() % SIZE;
		tmp = mat[n];
		mat[n] = mat[r];
		mat[r] = tmp;
	}
	
	return ;
}
