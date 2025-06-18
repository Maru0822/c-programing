#include<stdio.h>
int main(void)
{    
    int a;

    printf(" 日 月 火 水 木 金 土");
    for(a=1; a<=31; a++){
        printf("%3d",a);
        if((a-3)%7==0){
            printf("\n");
        }
    }
    return(0);
}