#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("数字=");
    scanf("%d",&a);

    b=1;

    while(b<=a){
        if (b % 2 == 1){
            printf("%d\n",b);
        }
        b++;
    }

    return(0);
}