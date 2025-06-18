#include <stdio.h>
int main(void)
{
    int x;

    printf("x>>");
    scanf("%d",&x);

    switch(x){
        case 1: printf("xは１です.\n");
        break;
        
        case 5: printf("xは５です.\n");
        break;

        default:printf("xは1.5意外です.\n");
    }
    return(0);
}