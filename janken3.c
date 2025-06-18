#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a;
    int x;
    double y;

            a = 'A';
            x = 1;

        while (a != '0'){
            a = getch();

            x = (12869 * x + 6925)% 32768;
            x = x % 3 + 1;

            printf("%d\n",x);
    }
    return(0);

}