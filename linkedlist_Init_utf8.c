#include <stdio.h>
#include <stdlib.h>

/*セルの定義*/
struct CELL{
	struct CELL *next;
	int data;
};

/*連結リストの先頭ポインタを宣言*/
struct CELL *header;//グローバル変数　関数の外で宣言されている。これ以降の変数すべてで使える。

void Init(void)
{
	struct CELL *delete_pos;//関数の内部で宣言されている。宣言された関数の中でしか使えない。　関数から出ると自動的に排除される。

	while (header != NULL){
		delete_pos = header;

		header = header -> next;//(header = delete_pos -> nextでも同じ意味)

		free(delete_pos);

	}
}

/*
int Item(int pos)
{
}

void Add(int value)
{
}

void Insert(int value, int pos)
{
}*/
// int main(void)
// {
// 	int i;
// 	struct CELL *p;
	
// 	//セルの宣言
// 	struct CELL a = {NULL, 100}; //stract CELLのポインタ,　データ
// 	struct CELL b = {NULL, 200};//ポインタにNULLが入ると空になる（何も指していない状態）
// 	struct CELL c = {NULL, 300};

// 	//セルの結合(連結)
// 	header = &a;//ポインタheaderにaの先頭アドレスとを代入
// 	a.next = &b;//ドット演算子aの構造体のnextにbの先頭アドレスを代入　a.nextはbを指す
// 	b.next = &c;//同様にb.nextはcを指す
	
// 	//連結リストの状態を表示
// 	printf("リストの状態\n");
// 	for (p = header; p != NULL; p = p->next){//pにheaderを入れているのでpにはaの先頭アドレス
// 	//pにpがさしている構造体のnextメンバを代入（新しアドレス）
// 		printf("[%d : ・-]-> ", p->data);//pがさすアドレスの構造体のデータを参照
// 	}
// 	printf("NULL\n");
	
// 	return (0);
// }
int main(void)
{
	int i;
	struct CELL *p;
	
	//セルの宣言
	struct CELL *a;
	struct CELL *b;
	struct CELL *c;
	struct CELL *d;
	
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
	
	return (0);
}