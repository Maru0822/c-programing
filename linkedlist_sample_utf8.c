#include <stdio.h>
#include <stdlib.h>

/*セルの定義*/
struct CELL{
	struct CELL *next;
	int data;
};

/*連結リストの先頭ポインタを宣言*/
struct CELL *header;

/*
void Init()
{
}

int Next(int pos)
{
}

int Count()
{
}

int Item(int pos)
{
}

void Add(int value)
{
}

void Insert(int value, int pos)
{
}
*/

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
	struct CELL a = {NULL, 100};//stract CELLのポインタ,　データ
	struct CELL b = {NULL, 200};//ポインタにNULLが入ると空になる（何も指していない状態）
	struct CELL c = {NULL, 300};

	//セルの結合(連結)
	header = &b;//ポインタheaderにaの先頭アドレスとを代入
	b.next = &a;//ドット演算子aの構造体のnextにbの先頭アドレスを代入　a.nextはbを指す
	a.next = &c;//同様にb.nextはcを指す
	
	//連結リストの状態を表示
	printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){//pにheaderを入れているのでpにはaの先頭アドレス
	//pにpがさしている構造体のnextメンバを代入（新しアドレス）
		printf("[%d : ・-]-> ", p->data);//pがさすアドレスの構造体のデータを参照
	}
	printf("NULL\n");
	
	return (0);
}