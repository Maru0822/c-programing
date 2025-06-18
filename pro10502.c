#include<stdio.h>

int main(void)
{
    char a;
    int b;

    float c;

    printf("char>>");
    scanf("%c",&a);

    printf("int>>");
    scanf("%d",&b);

    printf("float>>");
    scanf("%f",&c);

    printf("a=%c,b=%d,c=%f\n",a,b,c);

    return(0);
}