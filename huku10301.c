#include<stdio.h>
int main(void)
{
    int s;
    printf("分>>");
    scanf("%d",&s);
    int m;
    printf("秒>>");
    scanf("%d",&m);
    int n;
    n=m+60*s;
    printf("%d分%d秒は%d秒です",s,m,n);
    
    return(0);
}
