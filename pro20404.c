#include <stdio.h>
int main(void)
{
    char str[100];
    int i;

    printf("string>>");
    scanf("%s",str);

    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c",str[i]-('a'-'A'));//小文字の値から大文字の値を引と32で小文字は大文字になる
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }
    return(0);
}