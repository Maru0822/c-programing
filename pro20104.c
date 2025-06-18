#include <stdio.h>
int main(void)
{
    char a[100];

    printf("文字列>>");
    scanf("%s",a);

    a[0] = '\0';
    
    printf("から文字列にしました\n");
    
    printf("文字列%s>>",a);

    return(0);

}