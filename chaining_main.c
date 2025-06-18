//chaining.c
#include <stdio.h>
#include <stdlib.h>

//ユーザ定義型
typedef int KEY;
typedef int DATA;

//連結リストのセルの定義
typedef struct cell {
    KEY key;
    DATA data;
    struct cell *next;
} CELL;

//ハッシュ表の大きさ
#define BUCKET_SIZE 10

//ハッシュ表の宣言
CELL *table[BUCKET_SIZE];

//ハッシュ関数
int Hash(KEY k)
{
    return (k % BUCKET_SIZE);
}

//キー比較関数
int Keyequal(KEY a, KEY b)
{
    if (a == b){
        return (1);
    }
    else {
        return (0);
    }
}

//ハッシュ表の初期化
void Init(void)
{
    int i;
    CELL *dp;

    while (i < BUCKET_SIZE){
        //i番目のバケットに接続された連結リストを初期化
        while (table[i] != NULL){
            dp = table[i];
            table[i] = table[i]->next;
            free(dp);
        }
        i++; //次のバケットに移動
    }
}

//探索関数
CELL *Find(KEY key)
{
    CELL *p;
    int h;
    
    //ハッシュ値の計算
    h = Hash(key);

    /*ハッシュ値のバケットにあるポインタ～連結リストの末尾（NULL）*/
    for (p = table[h]; p != NULL; p = p->next){
        /*キーが一致*/
        if (Keyequal(key, p->key) == 1) {
            return (p);/*セルへのポインタ*/
        }
    }
    
    return (NULL); //探索失敗の場合
}      

//挿入関数
int  Insert(KEY key, DATA *data)
{
    CELL *p;
    int h;
    
    /*探索に成功*/
    if (Find(key) != NULL) {
        return (1); //挿入失敗
    }

    //1. CELL型分の領域を確保
    p = (CELL *)malloc(sizeof(CELL));
    if (p == NULL){
        printf("領域の確保に失敗\n");
        return (1);
    }
    //2. ハッシュ値を求める
    h = Hash(key);
    
    //3. 確保した領域のkeyメンバに引数keyを代入
    p->key = key;
    //4. 確保した領域のdataメンバに引数dataを代入
    p->data = *data;

    //5. 連結リストの先頭に接続
    p->next = table[h];
    table[h] = p;

    return  (0);
}   

//削除関数
int Delete(KEY key)
{
    CELL *p, *q;
    int h;
    
    //1. 変数ｈにハッシュ値を求める
    h = Hash(key);

    //2. 該当バケットが空の場合は「1」を返して終了
    if (table[h] == NULL){
        return (1);
    }

    //3. 連結リストの先頭の場合
    //table[h]->key == key
    if (Keyequal(table[h]->key, key)){
        //連結リストの先頭のセルを削除する
        p = table[h];
        table[h] = table[h]->next;
        free(p);
        //「0」を返して終了
        return (0);
    }

    //2番目以降の場合
    //ポインタpとqを先頭から末尾まで反復
    for (q = table[h], p = q->next; p != NULL; q = q->next, p = q->next){
        //4. キーとp->keyが一致した場合、接続を切り替えて
        //     ポインタpの領域を解放し、「0」を返して終了
        if (Keyequal(p->key, key)){
            q->next = p->next;
            free(p);
            return (0);
        }
    }

    return (1);  //このreturnは削除失敗
}      

void disp(void)
{
	int i;
	CELL *p;
		
	for (i = 0; i < BUCKET_SIZE; i++){
		printf("table[%2d]->", i);
		p = table[i];
		while (p != NULL){
			printf("[%d:%d]->", p->key, p->data);
			p = p->next;
		}
		printf("NULL\n");
	}
}

int main(void)
{
	CELL *p;
	KEY key;
	DATA data;
	int i, no;
	
	do {
		printf("1: 表示\n");
		printf("2: 探索\n");
		printf("3: 挿入\n");
		printf("4: 削除\n");
		printf("0: 終了\n");
		printf(">> ");
		scanf("%d", &no);
		
		switch (no){
			case 1:
					disp();
					break;
			case 2:
					printf("探索するkeyの値>> ");
					scanf("%d", &key);
					p = Find(key);
					if (p == NULL){
						printf("探索に失敗しました\n");
					}
					else {
						printf("key[%d:%d]の探索に成功しました。\n", key, p->data);
					}
					break;
			case 3:
					printf("挿入するkeyの値>> ");
					scanf("%d", &key);
					printf("挿入するdataの値>> ");
					scanf("%d", &data);
					if (Insert(key, &data)){
						printf("挿入に失敗しました。\n");
					}
					break;
			case 4:
					printf("削除するkeyの値>> ");
					scanf("%d", &key);
					if (Delete(key)){
						printf("削除に失敗しました。\n");
					}
					break;
			default :
					break;
		}
	} while (no);
	
	return (0);
}