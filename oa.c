#include <stdio.h>
#include <stdlib.h>

typedef int KEY;
typedef int DATA;

#define EMPTY (KEY)0 //空の状態にする0で予約　空
#define DELETED (KEY)(-1) //keyとして―1予約　削除済み DELETEDするとtableに-1が入る

typedef struct bucket {
    KEY key;
    DATA data;
}BUCKET;

//ハッシュ表の大きさ
#define BUCKET_SIZE 10

//ハッシュ表の宣言　グローバル変数
BUCKET table[BUCKET_SIZE];

//ハッシュ関数
int Hash(KEY k)
{
    return (k % BUCKET_SIZE);
}

//キー比較関数
int Keyequal(KEY a, KEY b)//引数
{
    if (a == b){
        return(1);
    }
    else {
        return(0);  
    }
}

//再ハッシュ関数
int Rehash(int h)//ｈが現在のハッシュ値
{
    return((h + 1) % BUCKET_SIZE);
}

//ハッシュ表の初期化
void Init(void)
{
    int i;

    i = 0;
    while (i < BUCKET_SIZE)
    {
        table[i].key = EMPTY;//ハッシュ表のメンバキーまでアクセスして、EMPTYする
        i++;
    }
}

//探索関数
DATA *find(KEY key)
{
    int h, count;
    count = 0;
    //hにハッシュ値を求める
    h = Hash(key);
    while(table[h].key != EMPTY){//ハッシュ表のkey変数が空の状態ではない

        if (table[h].key != DELETED && Keyequal(key, table[h].key) == 1){//探索キーとハッシュ表のキーが一致
            return (&table[h].data);//該当バケットのデータへのポインタ アドレスと取り出して返す
        }

        if (++count > BUCKET_SIZE){//バケットサイズを超えるまで
            return (NULL);
        }

        h = Rehash(h);
    }
    return(NULL);//ハッシュ表の空に出会ったら終了
}

//挿入関数​
int   Insert( KEY  key,  DATA  *data)
{
    int  h,  count;

    count = 0;
    /*1. hにハッシュ値を求める*/
    h = Hash(key);

    /*2. (ハッシュ表のkey変数が空の状態ではない) && (削除済みではない)*/
while (table[h].key != EMPTY && table[h].key != DELETED){
        if (Keyequal(table[h].key, key) == 1){/*3. 探索キーとハッシュ表のキーが一致*/
            return  (0);  //挿入失敗（既に存在するキー）​
            }

        if ( ++count > BUCKET_SIZE ) {
            fprintf(stderr, "hash table overflow\n");
            return (0);
        }

        /*4. hに再ハッシュした値を代入*/
        h = Rehash(h);

    }

    /*5. 発見した空または削除済みのバケットにデータを挿入*/
    table[h].key = key;
    table[h].data = *data;

    return  (1);  //挿入成功​
}

//探索関数​

int  Delete( KEY  key)

{

    int  h,  count;

    count = 0;

    /*1. hにハッシュ値を求める*/
    h = Hash(key);

    while (table[h].key != EMPTY){/*2. ハッシュ表のkey変数が空の状態ではない*/

            if ( table[h].key != DELETED && Keyequal(table[h].key, key) == 1){/*3. 探索キーとハッシュ表のキーが一致

                /*4. 該当バケットのキー値を「削除済み」に変更*/
                table[h].key = DELETED;

                return  (1);
            }

            if ( ++count > BUCKET_SIZE ){

                return (0); //削除失敗​
            }

        /*5. hに再ハッシュした値を代入*/
        Rehash(h);
      }

      return  (0);  //削除失敗​

}

int main(void)
{
    int n;
    KEY key;
    DATA data;
    int i;
 
    Init();
   
    do {
        printf("1: 表示\n");
        printf("2: 探索\n");
        printf("3: 挿入\n");
        printf("4: 削除\n");
        printf("0: 終了\n");
        printf(">> ");
        scanf("%d", &n);
 
        switch(n){
            case 1:
                    for (i = 0; i < BUCKET_SIZE; i++){
                        printf("[ %3d : %3d ]\n", table[i].key, table[i].data);
                    }
                    break;
            case 2:
                    printf("探索キー>> ");
                    scanf("%d", &key);
                    if (find(key) != NULL){
                        printf("探索成功\n");
                    }
                    else {
                        printf("探索失敗\n");
                    }
                    break;
            case 3:
                    printf("キー>> ");
                    scanf("%d", &key);
                    printf("データ>> ");
                    scanf("%d", &data);
                    if (Insert(key, &data) == 1){
                        printf("挿入成功\n");
                    }
                    else {
                        printf("挿入失敗\n");
                    }
                    break;
            case 4:
                    printf("キー>> ");
                    scanf("%d", &key);
                    if (Delete(key) == 1){
                        printf("削除成功\n");
                    }
                    else {
                        printf("削除失敗\n");
                    }
                    break;
                    default:
                    printf("正しい数字を入力ください。\n");
        }
    } while (n);
 
    return (0);
}