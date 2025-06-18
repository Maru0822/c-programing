#include <stdio.h>

int main(void)
{
    char s[100];
    int i;
    int no;
    int k;

    printf("string>> ");
    scanf("%s", s);
    printf("no>> ");
    scanf("%d", &no);

    for (k = 0; k < no; k++){
        i = 0;
        while (s[i] != '\0'){
            printf("%c", s[i]);
            i++;
        }
        printf("\n");
    }
    
    return (0);
}