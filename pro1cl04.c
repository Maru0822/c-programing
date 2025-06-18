#include <stdio.h>
int main(void)
{
    int a;
    int b;
    float sum;

    a = 0;
    b = 0;
    sum = 0;
    
    for(a = 0; a < 10; a++){

        while(1){
        printf("点数>>");
        scanf("%d",&b);
        
        sum = sum+b;

            if(b >= 0 && b <= 100){
            break;
            }
            else{
                printf("再入力\n");
            }
        }
    }

    printf("平均%2f>>",sum/10);
    
    return(0);
}