#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a;
    int x;
    double y;

            a = 'A';
        srand(time(NULL));

        while (a != '0'){
            a = getch();

            x = rand();

            x = x % 3 + 1; 

            printf("%d\n",x);
    }
    return(0);

}