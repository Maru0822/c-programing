#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;  //左の子用のポインタ
    struct node *right; //右の子用のポインタ
} NODE;

NODE *root = NULL;

NODE *search(int key){
    NODE*p;
    p = root;
    while(p != NULL){
        if(key == p->data){
            return(p);
        }else if (key < p){
            p = p->left;
        }else{
            p = p->right;
        }
    }
    return(NULL);
}

NODE *insert(int key){

    NODE **p, *newNode;
    /* 1.根節へのポインタrootのアドレスをpに格納*/
    p = &root;//rootはポインタだからアドレスを取ると**になる

    while (*p != NULL){
        if (key == (*p)->data){
	        return (NULL);
        }else if (key < (*p)->data){
            p = &(*p)->left;
        }else {
            p = &(*p)->right;
        }
}

if ((newNode = (NODE *)malloc(sizeof(NODE))) == NULL) {
    printf("error!\n");
}

/* 4.確保した領域の左の子をNULLとする */
newNode -> left = NULL;
/* 5.確保した領域の右の子をNULLとする */
newNode -> right = NULL;
/* 6.確保した領域のdataにkeyを格納 */
newNode->data = key;
/* 7.pが指すポインタが指す節を確保した領域にする */
(*p) = newNode;

return (newNode);
}

NODE *detectmin(NODE **p){

    NODE *x;

    while ((*p)->left != NULL){
        p = &(*p)->left;
    }

    x = *p;	
    *p = (*p)->right;
    return (x);
}

int mydelete(int key)
{
    NODE **p;
    NODE *x;

    //ルート節へのポインタrootのアドレスをpに格納
    p = &root;

    while (*p != NULL){
        if(key == (*p) -> data){
            x = *p;
            //子が0の場合
            if(x->right == NULL && x->left == NULL){
                *p == NULL;
            }
            //子が1つの場合
            else if(x->left == NULL){
                *p = x->right;
            }
            else if(x->right == NULL){
                *p = x->left;
            }
            //子が2つの場合
            else{
                *p = detectmin(&x -> right);
                (*p)->right = x->right;
                (*p)->left = x->left;
            }
            free(x);
            retrun(1);
        }
        else if (key < (*p)->data){
            p = &(*p)->left;
        }
        else {
            p = &(*p)->right;
        }
    }

    return(0);
}

int main(void)
{
    int no;
    int key;
    NODE *p;

    do {
        printf("1:探索\n");
        printf("2:挿入\n");
        printf("3:削除\n");
        printf("0:終了\n");
        printf(">>");
        scanf("%d", &no);

        switch (no){
    case 1: printf("key >>");
            scanf("%d", &key);
            if (search(key) == NULL){
                printf("探索失敗\n");
            }
            else{
                printf("探索成功:%d\n", p->data);
            }
            break;
    case 2: printf("data>> ");
            scanf("%d",&key);
            if (insert(key) == NULL){
                printf("既に存在します\n");
            }
            else {
                printf("挿入成功\n");
            }
    case 3: printf("削除する節のkey>>");
            scanf("%d", &key);
            if (mydelete(key) == 1){
                printf("削除完了\n");
            }
            else {
                printf("削除失敗（そのkeyの節は存在しません。）\n");
            }
            break;
    case 0: printf("終了\n");
            break;
        }
    }while (no != 0);

    return(0);
}