#include <stdio.h>
#include <conio.h>

int main(void)
{
    char a;

    a = 'a';
    while (a != 'A'){
       a = getch();
        switch (a){
            case 'a': printf("A\n");
                        break;
            case 'b': printf("B\n");
                        break;
            case 'c': printf("C\n");
                        break;
            default:  printf("X\n");
        }
    }
    return(0);
}