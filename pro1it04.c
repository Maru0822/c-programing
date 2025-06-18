#include<stdio.h>
int main(void)
{
    int a;
    a=0;
    int b;
    b=10;
    while(a<10){
        printf("%d\n",b);
        b--;
        a++;
    }
    return(0);
}