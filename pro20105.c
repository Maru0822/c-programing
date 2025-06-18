#include <stdio.h>
int main(void)
{
    char st[100];
    int len;

    printf("文字列を入力してください>>");
    scanf("%s",st);

    len = 0;
    while (st[len] != '\0'){
        len++;
    }

    printf("文字列%sの長さは%dです\n",st ,len);

    return(0);
}