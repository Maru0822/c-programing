#include<stdio.h>
int main(void)
{
    int i;
    int j;
    int x;

    printf("x=");
    scanf("%d",&x);
    for (i = 0; i < x; i++){
        for (j = 0; j < x; j++){
            printf("%d",x);
        }
        printf("\n");
    }
    return(0);
}