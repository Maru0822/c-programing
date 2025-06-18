#include <stdio.h>
#include <string.h>
int main(void)
{
    char str3[100];
    char str1[100];
    char str2[100];

    printf("string1>>");
    scanf("%s",str1);

    printf("string2>>");
    scanf("%s",str2);

    strcpy(str3, str1);
    strcpy(str1, str2);
    strcpy(str2, str3);

    printf("str1:%s\n",str1);
    printf("str2:%s\n",str2);

    return(0);
}