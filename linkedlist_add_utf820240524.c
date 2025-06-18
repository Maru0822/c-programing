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

/*

void Insert(int value, int pos)
{
}
*/

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

	//連結リストの状態を表示
	printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){
		printf("[%d : ・-]-> ", p->data);
	}
	printf("NULL\n");
	printf("要素数：%d\n", Count());
	
	return (0);
}
