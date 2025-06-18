#include <stdio.h>
int main(void)
{

char str[100];
int i;

printf("文字列=");
scanf("%s", str);
i = 0;

while (str[i] != '\0'){
printf("%c", str[i]);
i++;
}

printf("\n");
return (0);

}