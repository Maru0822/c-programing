#include <stdio.h>
int main(void)
{
    char str[100];
    int i;
    int num[10];

    for (i = 0; i < 10; i++){
        num[i] = 0;
    }

    printf("string>>");
    scanf("%s",str);

    i = 0;
    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9'){
            num[str[i] - '0']++;
        }
        i++;
    }

    for (i = 0; i < 10; i++){
        printf("%d : %d\n", i, num[i]);
    }

    return(0);
}