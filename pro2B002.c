#include <stdio.h>
int main(void)
{
    unsigned int a;//32bit
    int i;
    int j = 0;

    printf("16shinnsuu>>");
    scanf("%x",&a);
 

    for (i = 0; i < 32; i++){
        if (((a >> i) & 1) ==1){
            j++;
        }
    }
    printf("%xno1nokazu%d\n",a,j);
    
    return(0);
}

