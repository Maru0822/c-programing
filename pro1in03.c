#include <stdio.h>

int main(void)
{
    int x;
    float pi = 3.14;

    printf("半径>>");
    scanf("%d",&x);

    printf("面積は%f",x*x*pi);

    return(0);
}