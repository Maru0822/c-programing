#include <stdio.h>

int eclid_1(int m, int n)
{
    int r;
    r = m % n;    
    if(r == 0){
        return (n);
    }

    return(eclid_1(n, r));
}

int main(void)
{
    int m;
    int n;
    int result;

    printf("整数1>> ");
    scanf("%d", &m);
    printf("整数2>> ");
    scanf("%d", &n);

    result = eclid_1(m,n);

    printf("%dと%dの最大公約数:%d\n", m, n, result);
    return (0);
}