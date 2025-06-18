#include <stdio.h>
int main(void)
{
    int a;
    a=4;

    while ((a %10) !=1){
        printf("数字==");
        scanf("%d", &a);

        if((a %10) ==1){
            printf("終了");
        }
    }
    return(0);
}