#include <stdio.h>
#include <stdlib.h>

/*セルの定義*/
struct CELL{
    // struct CELL *prev;//一つ前のセルのアドレスを代入
	struct CELL *next;//次のセルのアドレスを代入
	int data;
};

/*連結リストの先頭ポインタを宣言*/
struct CELL *header = NULL;//宣言の外でNULL初期化を行うと、エラーが起こるので
// struct CELL *tailer = NULL;//宣言と同時に初期化する

//初期化関数
void Init()
{
	header = NULL;
	// tailer = NULL;
}

struct CELL *Next(struct CELL *pos){
	if (pos != NULL){
		return(pos->next);
	}
	else{
		return(NULL);
	}
}

// struct CELL *Prev(struct CELL *pos){
// 	if (pos != NULL){
// 		return(pos->prev);
// 	}
// 	else{
// 		return(NULL);
// 	}
// }

int main(void)
{
	struct CELL *p;
	int i;
	i = 0;
	
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
	// a->prev = NULL;
	b->data = 200;
	b->next = NULL;
	// b->prev = NULL;
	c->data = 300;
	c->next = NULL;
	// c->prev = NULL;
	d->data = 999;
	d->next = NULL;
	// d->prev = NULL;
	
	//セルの結合(連結)
	header = c;
	c->next = b;
	// b->prev = c;
	b->next = d;
	// d->prev = b;
	d->next = a;
	
	// a->prev = d;
	// tailer = a;
	
	//連結リストの状態を表示
	printf("リストの状態\n");

	printf("順方向リスト");
	for (p = header; i < 100; p = p->next){
		if (p->next == NULL){
			p = header;
			i++;
		}
		printf("[%d:・-]->",p->data);
	}

	printf("NULL\n");

	// printf("逆方向リスト");
	// for (p = tailer; p != NULL; p = p->prev){
	// 	printf("[%d : ・-]-> ", p->data);
	// }
	// printf("NULL\n");
	
	return (0);
}