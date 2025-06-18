#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];

    printf("string>>");
    scanf("%s",str1);

    strncpy(str1, "masaki", 6);

    printf("%s",str1);

    return(0);
}