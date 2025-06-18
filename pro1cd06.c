#include <stdio.h>

int main(void)
{
    int x;
    printf("16進数1>>");
    scanf("%x", &x);

    int y;
    printf("16進数2>>");
    scanf("%x", &y);

    int sum;

    sum = x + y;

    printf("合計%x",sum);

    return(0);
}