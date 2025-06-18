#include <stdio.h>
int main(void)
{
    int a;
 
    while (1){
        printf("a>>");
        scanf("%d",&a);
        printf("%d\n",a);

        if (a == 99){
            break;
        }
    }
    return(0);
}