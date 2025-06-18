#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[100];
    char s2[100];
    int n1;

    printf("string1>>");
    scanf("%s",s1);

    printf("string2>>");
    scanf("%s",s2);

    n1 = strcmp(s1, s2);

    if(n1 > 0){
        printf("%s,%s",s2,s1);//パスワードの認証のように同じか比較するときに使う
    }
    else if(n1 < 0){
        printf("%s,%s",s1,s2);
    }
    else {
        printf("same");
    }
    return(0);
}