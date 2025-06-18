#include <stdio.h>

int main(void)
{
    int a;

    printf("点数=");
    scanf("%d", &a);

    if (0 <= a && a <= 59){
        printf("赤点\n");
    }
    else {
        printf("合格\n");
    }
    
    return (0);
}
