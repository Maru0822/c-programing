#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    char bun[100];
    int n1;
    int n2;

    printf("string1>>");
    scanf("%s",str);

    printf("string2>>");
    scanf("%s",bun);

    n1 = strlen(str);
    n2 = strlen(bun);

    if(n1 > n2){
        printf("%s is longer than %s",str,bun);
    }
    else if(n1 < n2){
        printf("%s is longer than %s",bun,str);
    }
    else{
        printf("%s and %s are same word count",str,bun);

        return(0);
    }
}