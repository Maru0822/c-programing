#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];
    char str2[100];

    printf("string1>>");
    scanf("%s",str1);
    printf("string2>>");
    scanf("%s",str2);

    strcat(str1, str2);

    printf("%s",str1);

    return(0);
}