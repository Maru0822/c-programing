#include <stdio.h>
#include <stdlib.h>

/*セルの定義*/
struct CELL{
	struct CELL *next;
	int data;
};

/*連結リストの先頭ポインタを宣言*/
struct CELL *header;

//初期化関数
void Init()
{
	//１．delete_posを宣言
	struct CELL *delete_pos;

	while (header != NULL){
		//2.delete_posにheaderを代入
		delete_pos = header;			
		//3.headerの指すセルを次のセルに変更
		header = header->next;
		//同じ意味：header = delete_pos->next;
		//4.delete_posの指すセルを解放(free)
		free(delete_pos);
	}
}

int Count(void)
{
    int  c = 0;
	struct CELL *p;
	
    for (p = header; p != NULL; p = p->next){
		c++;
	}

    return (c);
}



void Add(int value)
{
	//0.　必要な変数の宣言
	struct CELL *p;
	struct CELL *nc;

	if (header == NULL){
		//エラー処理は省略
		//(1)
		nc = (struct CELL *)malloc(sizeof(struct CELL));
		//(2)
		header = nc;

/*		if ((header = (struct CELL *)malloc(sizeof(struct CELL))) == NULL){
			printf("メモリ領域の確保に失敗しました。\n");
			exit(1);
		}
*/
		//(3)要素を追加。（確保した領域にデータを格納）
		header->data = value;
		header->next = NULL;
	} else {
		//１．要素へのポインタを先頭のアドレスで初期化
		p = header;
		//２．リストの末尾セルまでリンクを辿って移動
		while (p->next != NULL){
			p = p->next;
		}
		//３．メモリ領域を確保し、１で宣言したポインタに代入
		nc = (struct CELL *)malloc(sizeof(struct CELL));
		p->next = nc;
		//４．要素を追加。
		nc->data = value;
		nc->next = NULL;
	}
}

void Delete(struct CELL *pos)
{

    if (pos != NULL){

        if (pos == header){
//１．先頭が指す要素を先頭が指す要素の次の要素に修正​
            header = header->next;
//２．メモリ領域の解放​
            free(pos);

        } else {
//１．要素へのポインタpを宣言し、先頭アドレスで初期化​
            struct CELL *p = header;

            while (p->next != pos){
                p = p->next;
            }
//２．リストの指定位置までリンクを辿って移動​
            p->next = (pos->next)->next;
//３．ポインタｐのnextメンバが指す要素をポインタｐのnextメンバが指す要素の​
//次の要素に修正​
            free(pos);
                //４．メモリ領域の解放​
        }
    }

}


void Insert(int value, struct CELL *pos)
{
	if (pos == header){
		struct CELL *newCell;
        //(1)
		if ((newCell = (struct CELL *)malloc(sizeof(struct CELL))) == NULL){
			printf("メモリ領域の確保に失敗しました。\n");
			exit(1);
		}
		//要素を挿入。（確保した領域にデータを格納）
        newCell->data = value;//(2)
        newCell->next = header;//(3)
        header = newCell;//(4)
	} else if (pos != NULL){
		//１．要素へのポインタpを宣言し、先頭アドレスで初期化。
        struct CELL *p = header;
		//２．挿入領域newCellの宣言
        struct CELL *newCell;
		//３．リストの指定位置（ポインタ）までリンクを辿ってポインタｐを移動
        while (p->next != pos){
            p = p->next;
        }
		//４．メモリ領域を確保(malloc)し、１で宣言したポインタnewCellに代入
        newCell = (struct CELL *)malloc(sizeof(struct CELL));

		//５．nextメンバの接続を切り替える。
        newCell->data = value;//(3)
        newCell->next = p->next;//(4)
        p->next = newCell;//(5)
	}
}

int main(void)
{
	int i;
	struct CELL *p;
	
	//セルの宣言
	struct CELL *a;
	struct CELL *b;
	struct CELL *c;
	struct CELL *d;
	
    Init();

	a = (struct CELL *)malloc(sizeof(struct CELL));
	b = (struct CELL *)malloc(sizeof(struct CELL));
	c = (struct CELL *)malloc(sizeof(struct CELL));
	d = (struct CELL *)malloc(sizeof(struct CELL));
	
	
	a->data = 100;
	a->next = NULL;
	b->data = 200;
	b->next = NULL;
	c->data = 300;
	c->next = NULL;
	d->data = 999;
	d->next = NULL;
	
	//セルの結合(連結)
	header = c;
	c->next = b;
	b->next = d;
	d->next = a;
	
	//連結リストの状態を表示
	printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){
		printf("[%d : ・-]-> ", p->data);
	}
	printf("NULL\n");
    printf("要素数：%d\n", Count());
	
	Init();
	Add(123);
	Add(987);
    Insert(888,header);

	//連結リストの状態を表示
	printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){
		printf("[%d : ・-]-> ", p->data);
	}
	printf("NULL\n");
	printf("要素数：%d\n", Count());

    Delete(header);

    printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){
		printf("[%d : ・-]-> ", p->data);
	}
	printf("NULL\n");
	printf("要素数：%d\n", Count());
	
	return (0);
}
