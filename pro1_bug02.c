#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
	
    printf("整数1=");
    scanf("%d", &a);
	
    printf("整数2=");
    scanf("%d", &b);
	
    printf("整数3=");
    scanf("%d", &c);
	
    printf("平均=%f\n", a + b + c / 3.0);
	
	return (0);
}
