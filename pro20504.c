#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    char str2[100];

    printf("string>>");
    scanf("%s",str);

    strcpy(str2, str);

    printf("string:%s\n copy:%s",str ,str2);

    return(0);
}