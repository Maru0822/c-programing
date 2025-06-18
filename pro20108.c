#include <stdio.h>

int main(void)
{
    char str[100];
    int i;
    int count;

    printf("string>> ");
    scanf("%s", str);

    count = 0;
    i = 0;
    while (str[i] != '\0'){
        if (str[i] >= '0'&& str[i] <= '9'){
            count++;
        }
        i++;
    }
    printf("%d\n", count);

    return (0);
}