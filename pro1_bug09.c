#include <stdio.h>


int main(void)
{
	int i;
	int n;
    int sum;

    sum = 0;
	
	printf("n=");
	scanf("%d", &n);

    for (i = 1; i <= n; i++){
        sum = sum + i;
    }

    printf("1から%dまでの合計は%dです\n", n, sum);

    return (0);
}
