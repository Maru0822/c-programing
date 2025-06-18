#include <stdio.h>

int main(void)
{
    int stick;  //残りの本数
    int n;      //取得する棒の数
    int player; //先手と後手
    int check;  //入力確認用変数

    //初期化
    stick = 21;
    player = 0; //0:先手　1:後手
    check = 1;

    while (stick != 0){
        if (player == 0){
            printf("先手の番です\n");//先手の表示
        }
        else {
            printf("後手の番です\n");//後手の表示
        }

        while (check != 0){

        printf("棒の数:%d\n" , stick);//棒の本数

        printf("取得する棒の数(1~3)>>");//取得する棒の入力
        scanf("%d" , &n);

        if (n > stick){
            printf("棒の数以下を入力する");//エラー処理
        }

        else if (n >= 1 && n <= 3){
            check=0;
        }
        else {
            printf("1~3の値を入力してください\n");
        }
    }

        stick = stick-n;

        player = (player + 1)%2;

        check = 1;
    }

    if (player == 0){            //勝敗
        printf("先手の勝ちです\n");
    }
    else{
        printf("後手の勝ちです\n");
    }

    return(0);
}