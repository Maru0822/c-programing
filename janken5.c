    int x;
    double y;
    int win;
    int no;

    no = 1;//これは'0'以外ならなんでもいい

    //乱数の初期値（種）
    srand(time(NULL));

    while (no != 0){

        printf("\n\nじゃんけん・・・");

        //自分の手
        no = getch() - '0';
        printf("ぽん\n\n");

        switch (no){
            case 1: printf("ぐー");
                    break;
            case 2: printf("ちょき");
                    break;
            case 3: printf("ぱー");
                    break;
            case 0: printf("終了\n");
                    break;
            default:printf("0～3を入力してください。\n");
        }

        if (no >= 1 && no <= 3){

            printf(" vs ");

            //コンピュータの手
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

            //勝敗の決定
            win = ((no - x) + 3) % 3;

            switch(win){
                case 0: printf("あいこ\n");
                        break;
                case 1: printf("あなたの負け\n");
                        break;
                case 2: printf("あなたの勝ち\n");
                        break;
            }
        }

    }

    return (0);
}
