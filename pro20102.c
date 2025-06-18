#include <stdio.h>
int main(void)
{
    int a;
    char b[100];
    int i;

    printf("回数>>\n");
    scanf("%d",&a);

    printf("入力>>\n");
    scanf("%s",b);

for (i = 0; i < a; i++){

        printf("%s\n",b);

}
    return(0);
}
