#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char no;
    int x;
    double y;

    no = 'A';//これは'0'以外ならなんでもいい

    //乱数の初期値（種）
    srand(time(NULL));

    while (no != '0'){
        no = getch();

        x = rand();
        x = x % 3 + 1;

        switch (x){
            case 1: printf("ぐー\n");
                    break;
            case 2: printf("ちょき\n");
                    break;
            case 3: printf("ぱー\n");
                    break;
            case 0: printf("終了\n");
                    break;
            default:printf("0～3を入力してください。\n");
        }

    }

    return (0);
}