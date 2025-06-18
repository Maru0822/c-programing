#include <stdio.h>

//ユーザー定義型
typedef int KEY;
typedef int DATA;

typedef struct cell{
    KEY key;
    DATA data;
    struct cell *next;
}CELL;//以降CELLという型で使える

//ハッシュ表の大きさ
#define BUCKET_SIZE 10

//ハッシュ表の宣言
CELL *table[BUCKET_SIZE];

//ハッシュ関数
int Hash(KEY k)
{
    return(k % BUCKET_SIZE);
}

//キー比較関数
int Keyequal(KEY a, KEY b)
{
    if (a == b){
        return(1);
    }
    else {
        return(0);
    }
}

//ハッシュ表の初期化
void Init(void)
{
    int i;
    i = 0;
	CELL *dp;//関数の内部で宣言されている。宣言された関数の中でしか使えない。　関数から出ると自動的に排除される。

    while (i < BUCKET_SIZE){
        //i番目のバスケットに接続された連結リストを初期化
	    while (table[i] != NULL){
		    dp = table[i];

		    table[i] = table[i] -> next;//(header = delete_pos -> nextでも同じ意味)

		    free(dp);
        }
        i++;//次のバッケットに移動

	}
}

CELL *Find(KEY key)
{
    CELL *p;
    int h;
    h = Hash(key);//keyの計算

    for (p = table[h]; p != NULL; p = p->next){
        if(keyequal(key, p->key) == 1){//keyの比較
            return(p);
        }
    }
    return NULL;
} 

int main(void)
{
    return(0);
}