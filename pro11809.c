#include <stdio.h>
int main(void)
{
    int a;
    printf("整数＞＞");
    scanf("%d",&a);
    if(a%3==0){
        printf("3の倍数");
    }
    else{
        printf("3の倍数ではない");
    }
    return(0);
}
