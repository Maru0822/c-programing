#include<stdio.h>
int main(void)
{
    int n;
    printf("入力数");
    scanf("%d",&n);
    int a;
    a=0;
    int i;
    i=0;
    int sum;
    sum=0;


    while(i<n){
        printf("a>>");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("合計値:%d\n",sum);
    return(0);
}