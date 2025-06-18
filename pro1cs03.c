#include <stdio.h>

int main(void)
{
    int x;
    int i;
    int j;

    printf("大きさ=");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++){

        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return(0);
}