#include <stdio.h>
int main(void)
{
    int a;
    int r;

    printf("整数>>");
    scanf("%d",&a);

    r=a%3;

    switch(r){
        case 0: printf("A組");
        break;
        case 1: printf("B組");
        break;
        case 2: printf("C組");
    }
    return(0);
}