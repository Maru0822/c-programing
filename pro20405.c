#include <stdio.h>
int main(void)
{
    char  str[100];
    int i;

    printf("string>>");
    scanf("%s",str);

    i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c",str[i]-('a'-'A'));
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c",str[i]+('a'-'A'));
        }
        i++;
    }
    return(0);
}