#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000	//レコード長
#define TRIAL 10	//試行回数
/************************************************/
/* 比較・交換の計測を行うときはコメントを外す． */
#define COMPSWAP
/************************************************/

typedef int DATA;

//構造体の定義
typedef struct tag{
	DATA x;
	//要素サイズを大きくするときはコメントを外す．
//	double d[10];
} RECORD;

//プロトタイプ宣言
void make_matrix(RECORD data[]);
void disp_record(RECORD data[]);
void bubble_sort(RECORD data[], int *comp, int *swap);
void selection_sort(RECORD data[], int *comp, int *swap);
void insertion_sort(RECORD data[], int *comp, int *swap);

int main(void)
{
	int i, comp, swap, sum_c, sum_s;
	clock_t s_time, sum_t;
	RECORD data[N];
	
	//TRIAL回の平均実行時間，比較・交換回数を出力
	sum_t = 0;
	sum_c = 0;
	sum_s = 0;

	for (i = 0; i < TRIAL; i++){
#ifdef COMPSWAP	//初期化(比較・交換用)
		comp = 0;
		swap = 0;
#endif
		//レコードをランダムに生成
		//make_matrix(data);
		//レコード確認用
//		if (i == 0){
//			disp_record(data);
//		}
		
		//計算開始時間の測定
		s_time = clock();
	
		//実行関数を指定
		//bubble_sort(data, &comp, &swap);
		selection_sort(data, &comp, &swap);
		//insertion_sort(data, &comp, &swap);
		
		sum_t += clock() - s_time;
		
#ifdef COMPSWAP	//比較・交換回数用
		sum_c += comp;
		sum_s += swap;
#endif
	}
	
	//結果の出力
#ifdef COMPSWAP	//比較・交換回数用
	printf("time = %gms\tcomparison = %.2f回\tswap = %.2f回\n"
		, (double)sum_t / TRIAL, (double)sum_c / TRIAL, (double)sum_s /TRIAL);
#else
	//計算時間用
	printf("time = %gms\n", (double)sum_t / TRIAL);
#endif

	return (0);
}

//レコードの生成関数
void make_matrix(RECORD data[])
{
	int i;
	
	//乱数の種の生成
	srand(time(NULL));
	
	for (i = 0; i < N; i++){
		data[i].x = (DATA)(rand() / (RAND_MAX + 1.0) * N);
	}
}

//レコード表示関数
void disp_record(RECORD data[])
{
	int i;
	
	for (i = 0; i < N; i++){
		printf("%d\n", data[i].x);
	}
}

//バブルソート関数
void bubble_sort(RECORD data[], int *comp, int *swap)
{
	int i;
	int j;
	RECORD tmp;

	for (i = 0; i < N - 1; i++){
		for (j = N - 1; j > i; j--){
			(*comp)++;
			if (data[j - 1].x > data[j].x){
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
				(*swap)++;
			}
		}
	}
}

//選択ソート関数
void  selection_sort(RECORD  data[],  int  *comp, int *swap)
{
    int i;
    int j;
    int min;
    int tmp;

    min = 0;
    for (i = 0; i < N; i++){
	(*comp)++;
        for (j = i+1; j < N; j++){
            if (data[min].x > data[j].x){
                min = j;
				(*swap)++;
            }
        }
        tmp = data[i].x;
        data[i].x = data[min].x;
        data[min].x = tmp;
    }
}

//挿入ソート関数
void insertion_sort(RECORD data[], int *comp, int *swap)
{
	int i;
	int j;
	RECORD tmp;

	for (i = 1; i < N; i++){
		j = i;
		(*comp) ++;
		while(j > 0 && data[j - 1].x > data[j].x){
			(*swap)++;
			tmp = data[j - 1];
			data[j - 1] = data[j];
			data[j] = tmp;

			j--;
		}
	}
}
