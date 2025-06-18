#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[100];
    char str2[] = "masaki";
    int n;

    printf("string1>>");
    scanf("%s",str1);

    n = strcmp(str2, str1);

    if(n == 0){
        printf("hello %s",str2);
    }
    else{
        printf("you are different person");
    }

    return(0);
}