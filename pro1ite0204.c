#include<stdio.h>
int main(void)
{
    int x;
    int i;
    int j;
    printf("x>>");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            printf("%d+%d=%d\n",i,j,i+j);
        }
    }
    return(0);
}