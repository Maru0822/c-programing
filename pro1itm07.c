#include<stdio.h>
int main(void)
{
    int i;
    int x;
    int y;
    printf("x>>");
    scanf("%d",&x);
    printf("y>>");
    scanf("%d",&y);

    for(i=x; i<=y; i++){
        printf("%d\n",i);
    }
    return(0);
}