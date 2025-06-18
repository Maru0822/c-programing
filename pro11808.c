#include <stdio.h>
int main(void)
{
    float a;
    float b;
    printf("整数１＞＞");
    scanf("%f",&a);
    printf("整数２＞＞");
    scanf("%f",&b);
    if(a+b>0){
        printf("正の数");
    }
    else{
        printf("負の数");
    }
    return(0);
}