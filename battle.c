#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

int main (void)
{   
    //変数
    char act;
    int action;//行動
    int monster_action;

    //プレイヤー情報
    int player_hp;
    int player_dmg;
    int player_atk;
    int player_atk_c;
    int player_ac;

    //装備
    int arm_atk[3] = {5, 8, 10};
    int arm_atk_c[3] = {10, 8, 5};
    int arm;

    //モンスター情報
    int monster_hp;
    int monster_dmg;
    int monster_atk;
    int monster_atk_c;
    int monster_ac;

    //装備を決定
    //1:ヒノキの棒
    //2:銅の剣
    //3:鉄のやり
    arm = 1;

    //初期化
    srand(time(NULL));
    player_hp = 10;
    monster_hp = 50;
    player_atk = arm_atk[arm];
    player_atk_c = arm_atk_c[arm];
    monster_atk = 8;
    monster_atk_c = 2;
    player_ac = 2;
    monster_ac = 2;

    //ターン性の戦闘土台
    while (1){
        system("CLS");//コンソール画面の消去
    }

    //行動の選択

    while (1){
        //HPの表示
        printf("---------------------\n");
        printf("| PLAYER : %4d     |\n", player_hp);
        printf("| MONSTER : %4d    |\n", monster_hp);
        printf("---------------------\n");
        
        //行動の選択
        printf("0: にげる\n");
        printf("1: こうげき\n");
        printf("2: ぼうぎょ\n");
        printf("行動の選択>>");
        //scanf("%d",&action);
        act = getch();//戦闘のリズムが良くなる
        printf("%c\n", act);
        action = act - '0';//文字を整数に変換してactionに代入

        //実際の行動
        //プレイヤーの行動
        switch(action){
            case 0: printf("にげだした..\n");
                break;

            case 1: printf("プレイヤーの攻撃\n");
                //ダメージ計算
                player_dmg = rand() % player_atk + player_atk_c-monster_ac;
                if (player_dmg < 0){
                    player_dmg = 0;
                }
                printf("プレイヤーは%dのダメージをあたえた\n" , player_dmg);
                break;

            case 2: printf("プレイヤーはぼうぎょした\n");
                player_dmg = 0;
                break;

        default: printf("こんらんしている\n");
        }
        //プレイヤーの行動の結果
        if (action == 0){
            break;
        }
        else {
            monster_hp = monster_hp - player_dmg;//ダメージを与える
        }


        //モンスターの行動
        monster_action = rand() % 3;
        switch(monster_action){
            case 0: printf("モンスターはようすをみている\n");
            break;
            case 1: printf("モンスターのこうげき\n");
            if (action == 2){
                //ダメージの計算
                monster_dmg = rand() % monster_atk + monster_atk_c-player_ac*2;
                if (monster_dmg < 0){
                    monster_dmg = 0;
                }
            }
            else{
                monster_dmg = rand() % monster_atk + monster_atk_c - player_ac;

                if (monster_dmg < 0){
                    monster_dmg =0;
                }
            }

            printf(" モンスターは%dのダメージをあたえた\n",monster_dmg);

            break;
            case 2: printf("モンスターはかいふくしている\n");
            break;

            default: printf("モンスターは様子を見ている");
        }
        //モンスターの行動結果
        if (monster_action == 2){
            monster_hp = monster_hp - rand() % 5+1;
        }


        //戦闘終了の判定
        if (player_hp <= 0){
            printf("モンスターにたおされてしまった\n");
            break;
        }
        else if (monster_hp <= 0){
            printf("モンスターをたおした\n");
            break;
        }
        printf("何かキーを押してください\n");
        getch();
    }
    return(0);
}