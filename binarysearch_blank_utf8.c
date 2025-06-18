#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100	/*データ数*/
#define MAX 200	/*データの最大値（SIZEの2倍程度を目安）*/
#define N 100	/*繰返し回数*/

int makeData(int mat[]);
void shuffleData(int mat[]);
int linear_search(int mat[], int key);
int binary_search(int mat[], int key);

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
		
		key = rand() % max;
		no = binary_search(data, key);
		
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
* @return	number of search
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

	return (j+1);
}
/*****************************************************
* Binary search function
* @author	t.tamaki
* @param	mat[] : array for sorting
* @param	key : search key
* @return	number of search
******************************************************/
int binary_search(int mat[], int key)
{
	int left;
	int right;
	int center;
	int n;

	n = 0;
	left = 0;
	right = SIZE -1;
	//2分探査
	while (left <= right){
		//centerの計算
		center = (int)((left + right) / 2);

		//場合分け
		//探査成功
		if (mat[center] == key){
			printf("探索成功(%d) \n",center);
			break;
		}
		//centerの値の方が大きいとき
		else if(mat[center] > key){
			right = center - 1;
		}
		//centerの値の方が小さいとき
		else{
			left = center + 1;
		}

		n++;
	}

		return(n + 1);	
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
	
	n = 1;
	i = 1;
	mat[0] = n;
	while (i < SIZE){
		n++;
		if (rand() / (RAND_MAX + 1.0) < 0.9){
			mat[i] = n;
			i++;
		}
		
		if (n > MAX){
			i = 0;
			n = 1;
		}
	}
	
//	shuffleData(mat);
	
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
