#include<stdio.h>
int main(void)
{
    int x;
    int sum;
    int i;
    printf("x>>");
    scanf("%d",&x);

    for(i=2;i<=x;i+=2){
       sum+=i;
    }
    printf("合計:%d\n",sum);
    return(0);
}