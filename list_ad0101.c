#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5;
	
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
	
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
		printf("最大値は[%d]です。\n", n1);
	}
	
	if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
		printf("最大値は[%d]です。\n", n2);
	}
	
	if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
		printf("最大値は[%d]です。\n", n3);
	}
	
	if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
		printf("最大値は[%d]です。\n", n4);
	}
	
	if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
		printf("最大値は[%d]です。\n", n5);
	}
	
	return (0);
}
