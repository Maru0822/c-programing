#include <stdio.h>
#include <stdlib.h>

/*セルの定義*/
struct CELL{
	struct CELL *next;
	int data;
};

/*連結リストの先頭ポインタを宣言*/
struct CELL *header;

void  Init(void)
{
    //１．delete_posを宣言​
    struct CELL *delete_pos;

    while (header != NULL){
      //2.delete_posにheaderを代入  
      delete_pos = header;      
      //3.headerの指すセルを次のセルに変更​
      header = delete_pos->next;
      //4.delete_posの指すセルを解放(free)​
      free(delete_pos);

    }
}
/*

int Next(int pos)
{
}

int Count()
{
}

int Item(int pos)
{
}
*/

void Add(int value)
{
  //0.　必要な変数の宣言​
  struct CELL *p;
  struct CELL *nc;

  if (header = NULL){

    nc = (struct CELL *)mulloc(sizeof(struct CELL));

    header = nc;

    if ((header = (struct CELL *)malloc(sizeof(struct CELL))) == NULL){

      printf("メモリ領域の確保に失敗しました。\n");

      exit(1);
    }

    header->data = value;
    header->next = NULL;
    //要素を追加。（確保した領域にデータを格納）​

  } else {
    //１．要素へのポインタを先頭のアドレスで初期化​
    p = header;
    //２．リストの末尾までリンクを辿って移動​
    while(p->next != NULL){
        p = p->next;
    }
    //３．メモリ領域を確保し、１で宣言したポインタに代入​
    nc = (struct CELL *)mulloc(sizeof(struct CELL));
    p->next = nc;

    nc -> data = value;
    nc -> next = NULL;
    //４．要素を追加。​

  }

}

void Insert(struct CELL *pos, int value)
{
  if (pos == header){
    struct CELL *newCell;
    if ((newCell = (struct CELL *)malloc(sizeof(struct CELL))) == NULL){

      printf("メモリ領域の確保に失敗しました。\n");

      exit(1);

    }
    //要素を挿入。（確保した領域にデータを格納）​
  newCell->data = value;
  newCell->next = header;
  header = newCell;

  } else if (pos != NULL){
    //１．要素へのポインタpを宣言し、先頭アドレスで初期化。​
    struct CELL *p;
    p = header;
    //２．挿入領域newCellの宣言​
    struct CELL *newCell;
    //３．リストの指定位置（ポインタ）までリンクを辿ってポインタｐを移動​
    while (p->next != pos)
    {
      p = p->next;
    }
    //４．メモリ領域を確保(malloc)し、１で宣言したポインタnewCellに代入​
    newCell = (struct CELL *)malloc(sizeof(struct CELL));
    //５．nextメンバの接続を切り替える。​
    newCell->data = value;
    newCell->next = p->next;
    p->next = newCell;

  }

}

void PUSH(int value)
{
	struct CELL *newCell;
	if ((newCell = (struct CELL *)malloc(sizeof(struct CELL))) == NULL){
		printf("メモリ領域の確保に失敗しました\n");
		exit(1);
	}
	newCell->data = value;
	newCell->next = header;
	header = newCell;
}

int POP(void)
{
	int n = header->data;

	struct CELL *pos = header;

	header = header ->next;

	free(pos);
	
	return(n);
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
    struct CELL *p;
    p = header;
    //２．リストの指定位置までリンクを辿って移動​
    while (p->next != pos){
      p = p->next;
    }
    //３．ポインタｐのnextメンバが指す要素をポインタｐのnextメンバが指す要素の​次の要素に修正​
    p->next = (p->next)->next;
    //４．メモリ領域の解放​
    free(pos);
  }
  }
}

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
    d->data = 400;
    d->next = NULL;

    header = d;
    d->next = c;
    c->next = b;
    b->next = a;

	//連結リストの状態を表示
	printf("リストの状態\n");
	for (p = header; p != NULL; p = p->next){//pにheaderを入れているのでpにはaの先頭アドレス
	//pにpがさしている構造体のnextメンバを代入（新しアドレス）
		printf("[%d : ・-]-> ", p->data);//pがさすアドレスの構造体のデータを参照
	}
	printf("NULL\n");
	
	return (0);
}