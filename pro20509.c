#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];
    char str2[100];
    int i;

    printf("string>>");
    scanf("%s",str1);

    str2[0]='\0';//文字列の初期化


    for(i = 0;i < 10;i++){

        strcat(str2, str1);

    }
        printf("%s",str2);

    return(0);
}