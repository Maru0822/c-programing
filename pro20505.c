#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    char bun[100];
    int n1;
    int n2;

    printf("string>>");
    scanf("%s",str);
    printf("moziretu>>");
    scanf("%s",bun);

    n1 = strlen(str);
    n2 = strlen(bun);

    if(n1 > n2){
        strcpy(bun, str);
        printf("%s\n",str);
        printf("%s\n",bun);
    }
    else if(n1 < n2){
        strcpy(str, bun);
        printf("%s\n",str);
        printf("%s\n",bun);
    }
    else {
        printf("%s\n",str);
        printf("%s\n",bun);
    }
    return(0);
}