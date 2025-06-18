//0.521400 秒
//改良したところ　偶数と3の倍数が整数の中で多い為、その数を省き、奇数かつ3の倍数以外が残るので、2の倍数（偶数）で割ることを無くした。（奇数のみで割る）

#include <stdio.h>
#include <time.h>
#define range 50000	/*範囲*/
#define N 10		/*繰返し回数*/

void prime();

int main(void)
{
	clock_t st, et;
	int i;
	int total_time;
	
	total_time = 0;
	for (i = 0; i < N; i++){
		st = clock();
		prime();
		et = clock();
		
		total_time += (et - st);
	}
	
	printf("Computational time = %f\n", (double)total_time / N / CLOCKS_PER_SEC);
	
	return (0);
}

/*素数表示関数*/
void prime()
{
	int i, j;
	int divisor;
	
	printf("2");
	printf("3");
	for (i = 5; i < range; i+=2){
		if(i % 3 != 0 && i % 5 !=0){
			divisor = 0; 
			for (j = 1; j <= i; j+=2){
				if (i % j == 0 ){
					divisor++;
				}	
			}
			if (divisor == 2){
			 	printf("%d  ",i);
			}
		}
	}
	
	return ;
}
