#include <stdio.h>
int main(void)
{
    char str[100];
    int i;
    int A;
    int a;

    printf("string>>");
    scanf("%s",str);

    i = 0;
    A = 0;
    a = 0;

    while (str[i] != '\0'){
        if(str[i] >=  'a' && str[i]<= 'z'){
            a++;
        }
        if(str[i] >= 'A' && str[i]<= 'Z'){
            A++;
        }
        i++;
    }
    printf("Large:%d\n",a);
    printf("Small:%d\n",A);
    return(0);
}