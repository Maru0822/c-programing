#include <stdio.h>
#include <string.h>
int main(void)
{
    char name1[100];
    char name2[100];
    char str1[100];
    char n1;

    printf("name1>>");
    scanf("%s",name1);

    printf("name2>>");
    scanf("%s",name2);

    n1 = strncmp(name1, name2, 4);

    if(n1 == 0){
        printf("%s\n%s\n yokunitanamae",name1 ,name2 );
    }
    else {
        printf("nitenai");
    }
    return(0);
}