#include <stdio.h>
int main (void)
{
    char x;

    printf("x>>");
    scanf("%c",&x);

    switch(x='A'||'B'||'C'){
        case A: printf("おはよう");
        case B: printf("こんにちは");
                break;
        case C: printf("こんばんは");
                break;
        default:printf("ちがう");
    }
    return(0);
}
