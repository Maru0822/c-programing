#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    int no;//答え
    int answer;//回答者が入力するための変数
    int count;//回数を数える変数

    no = 0;//初期化

    srand(time(NULL));//ランダムの種

    answer = (rand() % 10000) + 1;//答えの設定

    count = 1;//カウントは１から始まるか初期化1
    while (1){//条件が１は無限ループ
        system("CLS");//画面が何も表示されていない状態
        printf("--------------------------------------------\n");

        printf("正解を入力すると終わります\n");

        printf ("1~10000の数字>>");//答えの入力
        scanf ("%d",&no);

        if( no == answer ){
            printf ("正解です☆彡\n\n");//正解の処理
            printf("%d回で正解です", count);
            break;
        }
        else if(no > answer ){
            printf ("正解は[%d]よりも小さい数字です\n",no);//正解がより小さい数字の処理
        }      
        else{
            printf("正解は[%d]よりも大きい数字です\n",no);//正解がより大きい数字の処理
        }

        count++;//カウント

        printf("何かキーをしてください\n");//リセット
        getch();

    }

    return(0);

}