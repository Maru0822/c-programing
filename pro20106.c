#include <stdio.h>
int main(void)
{
    int a;
    char b[100];
    char c;

    printf("文字=");
    scanf("%c",&c);

    printf("文字列=");
    scanf("%s",b);

    a = 0;
    while (b[a] != '\0'){
        if(b[a] == c){
            printf("見つけました　%d\n",a);
            break;
        }
        a++;
    }
    return(0);
}