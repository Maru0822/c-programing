#include <stdio.h>
int main(void)
{
    int i;
    int p;
    int sum;
    
    i=1;
    sum=0;
    p=1;

    while(p!=0){
        printf("商品%d>",i);
        scanf("%d",&p);

        sum = sum+p;
        i++;
    }
    printf("支払金額は%.0f円です。",sum*1.1);
    return(0);
}