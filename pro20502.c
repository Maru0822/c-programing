#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    int n;

    printf("string>>");
    scanf("%s",str);

    n = strlen(str);

    printf("%s's word count is %d",str,n);

    return(0);
}