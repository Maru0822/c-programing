#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];

    printf("string1>>");
    scanf("%s",str1);
    printf("string2>>");
    scanf("%s",str2);
    printf("string3>>");
    scanf("%s",str3);

    strncat(str4,str1,3);
    strncat(str4,str2,3);
    strncat(str4,str3,3);

    printf("%s",str4);
    
    return(0);
}

