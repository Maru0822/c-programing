#include <stdio.h>
int main(void)
{
    char[100];
    int i;
    int n;

    scanf("%s",str);

    n = 0;
    i = 0;
    while (str[i] != '\0'){
        if(i != 0){
            n = n*10;
        }
        n = n+str[i] - '0';
        i++;
    }
    printf("%d",n*2);
    return(0);
}