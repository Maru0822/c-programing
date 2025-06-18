#include <stdio.h>

struct tag {
    int id;
    char name[30];
};

int main(void)
{
    struct tag mem[6] = {
        {1331, "tamaki"},
        {1333, "iha"},
        {1334, "yonamine"},
        {1334, "suriyon"},
        {1343, "sato"}};
    int i;
    int n;

    printf("調べたいIDを入力>> ");
    scanf("%d", &n);

    mem[5].id = n;

    i = 0;

    while(mem[i].id != n){
        i++;
    }

    if(i < 5){
        printf("%d:%s\n",mem[i].id, mem[i].name);
    }
    else{
        printf("存在しません\n");
    }

    return (0);
}