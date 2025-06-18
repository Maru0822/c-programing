#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];
    char str2[100];

    printf("string>>");
    scanf("%s",str1);

    strcpy(str2,"<<<");
    strcat(str2,str1);
    strcat(str2,">>>");

    printf("%s",str2);

    return(0);
}