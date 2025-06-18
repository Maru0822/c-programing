#include <stdio.h>
int main(void)
{
    char a;

    printf("suuji(<=127)>>");
    scanf("%d",&a);

    if ((a & 0x80) != 0){ //0xは16進数を表す
        printf("hu");//正の数の最上位ビットは0だから0&1で0になる
    }
    else {
        printf("sei");//負の数の最上位ビットは1だから1&1で0になる
    }

    return(0);
}