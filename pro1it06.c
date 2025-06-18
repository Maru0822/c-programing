#include<stdio.h>
int main(void)
{
    int x;
    x=3;
    int y;
    y=6;
    while((x+y)%5!=0){
        printf("整数1>");
        scanf("%d",&x);
        printf("整数2>");
        scanf("%d",&y);
    }
    return(0);
}