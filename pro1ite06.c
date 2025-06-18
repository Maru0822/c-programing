#include<stdio.h>
int main(void)
{
    int a;
    for(a=1; a<=100; a++){
        if(a%3==0){
        printf("%dは三の倍数です\n",a);
        }
    }
    return(0);
}