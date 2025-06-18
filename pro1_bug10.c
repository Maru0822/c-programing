#include <stdio.h>

int main(void)
{
    int   i;
    int   a[10];
    int   sum;
    float heikin;
    int   n;
    
    for (i = 0; i < 10; i++){
        printf("整数=");
        scanf("%d", &a[i]);
    }
    
    sum = 0;
    for (i = 0; i < 10; i++){
        sum = sum + a[i];
    }
    
    heikin = sum / 10;

    n = 0;

    for (i = 0; i < 10; i++){
        if (a[i] > heikin){
            n++;
        }
    }
    

    printf("平均値より大きい数は%d個です\n", n);

    return (0);
}
