#include <stdio.h>

int main(void)
{
    int n;
    int a;
    
    printf("数字=");/*nの入力*/
    scanf("%d", &n);

    for (a = 1; a <= n; a+=2){/*奇数表示のfor文*/

        printf("%d\n", a);
    }
    
    return(0);
}