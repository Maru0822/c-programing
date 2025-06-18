#include <stdio.h>
int main(void)
{
    char str[100];
    int i;

    printf("string>>");
    scanf("%s",str);

    i = 0;
    while(str[i] != '\0'){
        if(str[i] < '0' || str[i] > '9'){//もうこの状態はアスキーコード
            printf("%c",str[i]);
        }
        i++;
    }
    return(0);
}