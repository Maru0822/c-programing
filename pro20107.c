#include <stdio.h>

int main(void)
{
    char str[100];
    char c;
    int i;
    int count;

    printf("character>> ");
    scanf("%c", &c);
    printf("string>> ");
    scanf("%s", str);

    count = 0;
    i = 0;
    while (str[i] != '\0'){
        if (str[i] == c){
            count++;
        }
        i++;
    }
    printf("%d\n", count);

    return (0);
}