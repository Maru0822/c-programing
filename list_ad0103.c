#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5;
	int max;
	
	printf("n1>> ");
	scanf("%d", &n1);
	
	printf("n2>> ");
	scanf("%d", &n2);
	
	printf("n3>> ");
	scanf("%d", &n3);
	
	printf("n4>> ");
	scanf("%d", &n4);
	
	printf("n5>> ");
	scanf("%d", &n5);
	
	max = n1;
	if (max < n2){
		max = n2;//max変数に比較した結果大きい方を代入する
	}
	
	if (max < n3){
		max = n3;
	}
	
	if (max < n4){
		max = n4;
	}
	
	if (max < n5){
		max = n5;
	}
	
	printf("最大値は[%d]です。\n", max);
	
	
	return (0);
}
