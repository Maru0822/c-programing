#include <stdio.h>
int main(void)
{
    int a;
    int b;
    printf("a>>");
    scanf("%d",&a);
    printf("b>>");
    scanf("%d",&b);

    if(b>0){
        printf("%d/%d=%d",a,b,a/b);
    }
    else{
        printf("０で割ることはできません");
    }
    return (0);

}