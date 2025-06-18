#include <stdio.h>
#include <conio.h>

int main(void)
{
    char x;

    x = 'a';
    while (x != 'X'){
        x = getch();

        if(x == 'z'){
            printf("%c\n", x - ('z' - 'a'));
        }
        else{
            printf("%c\n",x + 1);
        }
    }
    return(0);
}