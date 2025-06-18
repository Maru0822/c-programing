#include <stdio.h>
int main(void)
{
    char str[100];
    char bun[100];
    int i;
    int j;
    int j2;

    printf("string>>");
    scanf("%s",str);

    printf("bun>>");
    scanf("%s",bun);

    i = 0;
    j = 0;
    while (str[i] != '\0'){
        i++;  
        j++; 
    }

    i = 0;
    j2 = 0;
    while (bun[i] != '\0'){
        i++;
        j2++;
    }

    if(j > j2){
        printf("more %s",str);
    }
    else{
        printf("more %s",bun);
    }
    return(0);
}