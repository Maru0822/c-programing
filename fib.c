#include <stdio.h>

int fib(int n){

    if (n == 0){
        return(1);
    }
    if (n == 1){
        return(1);
    }
    return(fib(n-1) + fib(n-2));
}

int main(void){

    int n;
    printf("n>> ");
    scanf("%d", &n);

    printf("%dか月後のつがい数:%d\n", n, fib(n));

    return(0);
}