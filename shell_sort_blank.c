#include <stdio.h>
#define N 8

int main(void)
{
	int m[N] = {5, 10, 2, 9, 8, 4, 15, 12} ;
	int i, j, low, tmp;
	int h;

	printf("整列前：");
	for (i = 0; i < N; i++){
		printf("%d ", m[i]);
	}
	printf("\n");

	//shell sort
	//hの決定。要素数Nの9分の1より小さく、3倍して1を加えた数列の最大値を考える。
	//for (h = 1; h < ; h =) ;
	
	//挿入ソートを改良して、シェルソートのアルゴリズムとする。
	//hのループ
		//iのループ：ソートのスタート地点をhの値を使って決定
			//h離れた要素の比較交換のループ
	
	printf("整列後：");
	for (i = 0; i < N; i++){
		printf("%d ", m[i]);
	}
	printf("\n");
	
	return (0);
}
