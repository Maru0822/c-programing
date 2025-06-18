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

void PUSH(int value)
{
	// struct CELL *newCell;
	// newCell = (struct CELL *)malloc(sizeof(struct CELL));
	
	// if(header->next != NULL){
	// 	newCell->data = value;

	// 	newCell->next = header;
	// 	header = newCell;
	// }

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
	// struct CELL *newCell;
	// newCell = (struct CELL *)malloc(sizeof(struct CELL));
	// if(header->next == NULL){
	// 	newCell->next = header;
	// 	newCell->data = header->data;
	// 	header = newCell;
	// }
	// free(newCell->next);
	// return(0);
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

void Delete(struct CELL *pos)
{
	if (pos != NULL){
		if (pos == header){
			//１．先頭が指す要素を先頭が指す要素の次の要素に修正
            header = header->next;
			//２．メモリ領域の解放
            free(pos);
		} else {
			//１．要素へのポインタpを宣言し、先頭アドレスで初期化
            struct CELL *p = header;
			//２．リストの指定位置までリンクを辿って移動
            while (p->next != pos){
                p = p->next;
            }
			//３．ポインタｐのnextメンバが指す要素をポインタｐ
            //のnextメンバが指す要素の次の要素に修正
            p->next = (p->next)->next;
            //p->next = pos->next;
			//４．メモリ領域の解放
            free(pos);
		}
	}
}

int main(void)
{
    int i;
    int no;
    int v;
    struct CELL *p;
   
    //セルの宣言
    struct CELL *nw;
   
    Init();
 
    do {
        printf("1:PUSH\n");
        printf("2:POP\n");
        printf("0:exit\n");
        printf(">> ");
        scanf("%d", &no);
 
        switch (no){
            case 1: printf("value>> ");
                    scanf("%d", &v);
                    PUSH(v);
                    break;
            case 2: if(header != NULL){
			 			printf("pop : %d\n", POP());
					}
						break;
            case 0: printf("Exit\n");
                    break;
            default:printf("wrong number\n");
        }
 
        if (no != 0){
            printf("\n\n");
            for (p = header; p != NULL; p = p->next){
                printf("[ %3d ]\n", p->data);
            }
            printf("-------\n");
        }
    }
    while (no);
   
    return (0);
}
