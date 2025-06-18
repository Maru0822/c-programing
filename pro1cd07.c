#include <stdio.h>

int main(void)
{
    char c1;
    char c2;

    c1 = 'A';
    c2 = 'A' + 1;

    printf("%c(%x)%c(%x)\n",c1,c1,c2,c2);

    return(0);
}