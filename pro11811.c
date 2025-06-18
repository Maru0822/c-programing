#include <stdio.h>
int main(void)
{
    int a;
    printf("整数値＞＞");
    scanf("%d",&a);
    if((1<=a)&&(a<=5)){
        printf("OK");
    }
    else{
        printf("NO");
    }
    return(0);
}