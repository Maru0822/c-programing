#include <stdio.h>
#include <conio.h>
int main(void)
{
    char a;
    int x;

    a = 'A';
    x = 3;

    while (a != '0'){
        a = getch();

        x = (12869 * x + 6925)% 32768;
        x = x % 3 + 1;

        printf("%d\n",x);
    }

    return(0);
}