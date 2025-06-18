#include <stdio.h>
int main(void)
{
    int i;

    for (i = '0'; i <= '9'; i++){
        printf("%c(%x)\n",i,i);
    }
    return(0);
}