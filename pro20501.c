#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[5] = "tama";
    int n;

    n = strlen(str);//文字数をカウントするための変数
    printf("%s's word count is %d\n",str,n);

    return(0);
}