#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;  //左の子用のポインタ
    struct node *right; //右の子用のポインタ
    char label; //ラベル
};

void preorder(struct node *p)
{
    if (p == NULL) return;
    printf("節%cに立ち寄り.", p->label);
    //再帰呼び出し​
    preorder(p->left);
    preorder(p->right);
}

void inorder(struct node *p)
{
    if (p == NULL) return;
    //再帰呼び出し​
    inorder(p->left);
    printf("節%cに立ち寄り.", p->label);
    preorder(p->right);
}

void postorder(struct node *p)
{
    if (p == NULL) return;
    //再帰呼び出し​
    inorder(p->left);
    preorder(p->right);
    printf("節%cに立ち寄り.", p->label);
}

int main(void)
{
    struct node a = {NULL, NULL, 'A'};
    struct node b = {NULL, NULL, 'B'};
    struct node c = {NULL, NULL, 'C'};
    struct node d = {NULL, NULL, 'D'};
    struct node e = {NULL, NULL, 'E'};
    struct node f = {NULL, NULL, 'F'};
    struct node g = {NULL, NULL, 'G'};
    
    //接続
    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right =&e;
    c.right = &f;
    e.left = &g;

    //行きがけ順
    preorder(&a);
    //通りがけ順
    //inorder(&a);
    //帰りがけ順
    //postorder(&a);

    return (0);
}