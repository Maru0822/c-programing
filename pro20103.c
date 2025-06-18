#include <stdio.h>
int main(void)
{
    char q[100];
    char w[100];

    int a;
    int b;

    printf("文字列1>>");
    scanf("%s",q);

    printf("文字列2>>");
    scanf("%s",w);

    printf("%s%s",q,w);

    return(0);
}