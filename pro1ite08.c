#include<stdio.h>
int main(void)
{
    int a;
    int b;
    for(a=0; a<=5; a++){
        for(b=0; b<=a; b++){
        printf("*");
        }
        printf("\n");
    }
    return(0);
}