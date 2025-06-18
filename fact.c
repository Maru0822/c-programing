#include <stdio.h>

int fact_loop(int n)
{
    int a;
    int b = 1;

    for (a = n; a >= 1; a--){
        b *= a;
    }

    return(b);
}

int fact(int n)
{
    if (n == 0){
        return(1);
    }

    return (n*fact(n - 1));
}

int main(void)
{
    int n;
    int f;

    printf("n>> ");
    scanf("%d", &n);

    f = fact_loop(n);

    printf("%d! : %d\n", n, f);
    return(0);
}