#include<stdio.h>
int main(void)
{
    int a;
    a=1;
    while(a<=100){
        if(a%3==0){
            printf("%dは三の倍数です",a);
        }
        a++;
    }
    return(0);
}