
#include <stdio.h>
int main(void)
{
    int a;

    while(1){
        printf("生まれた月>>");
        scanf("%d",&a);
        printf("%d\n",a);
        
        if(a <= 12){
            break;
        }
    }
    return(0);
}