#include <stdio.h>

int main(void)
{
    int n; /*数値入力用の変数*/
    int sum;//合計の変数//

    sum=0;
    n=1;

    while (n != 0){

        printf("数字=");
        scanf("%d", &n);

        sum += n;
    }
    if(n == 0){
        printf("%d", sum);
    }
    
    return (0);
}