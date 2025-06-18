#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    /*変数の宣言*/
    int stick;  //残りの棒の本数を入れる変数
    int n;      //取得する棒の数
    int player; //先手後手を制御する変数
    int check;  //入力確認用フラグ変数

    /*初期化*/
    stick = 21;
    player = 0; //先手：0、後手：1
    check = 1;

    srand(time(NULL));

    /*ゲーム本体*/
    /*条件式は場に棒がある間は真（ゲーム続行）*/
    while (stick != 0){
        /*1.先手か後手かの表示*/
        if (player == 0){
            printf("先手の番です。\n");
        }
        else {
            printf("後手の番です。\n");
        }

        /*2.取得する棒の数の入力*/
        while (check != 0){
            printf("棒の数：%d\n", stick);

            if (player == 0){
                printf("取る棒の数を入力>> ");
                scanf("%d", &n);
            }
            else {
                n = rand() % 3 + 1;
            }

            //入力のエラー処理
            if (n > stick){
                printf("棒の数以下の数字を入力してください\n");
            }
            else if (n >= 1 && n <= 3){
                check = 0;
            }
            else {
                printf("１～３の値を入力してください\n");
            }
        }

        /*3.残りの棒の数の計算*/
        stick = stick - n;

        /*4.先手と後手の交代*/
        player = (player + 1 ) % 2;

        /*5．フラグを戻す*/
        check = 1;
    }

    /*勝敗の決定*/
    if (player == 0){
        printf("先手の勝ちです。\n");
    }
    else {
        printf("後手の勝ちです。\n");
    }


    return (0);
}