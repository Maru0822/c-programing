#include <stdio.h>
#include <conio.h>
int main(void)

{
        char no;
    //printf("1: ぐー\n");
    //printf("2: ちょき\n");
    //printf("3: ぱー\n");
    //printf("0: 終了\n");
    //printf(">>");

        no = 1;

        while (no != '0'){
                no = getch();

        no = getch();

        switch (no){
            case '1': printf("ぐー\n");
                    break;
            case '2': printf("ちょき\n");
                    break;
            case '3': printf("ぱー\n");
                    break;
            case '0' : printf("終了");
                    break;
            default : printf("0~3を入力してください");
        }

        }
        return(0);
    
}
