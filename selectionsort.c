//bubblesort.c
#include <stdio.h>

void  selection_sort(int  a[],  int  n)
{
    int i;
    int j;
    int min;
    int tmp;

    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (a[min] > a[j]){
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
    printf("最小値：%d\n", a[0]);
}

int main(void)
{
    int i;
    int m[10] = {6, 4, 9, 1, 3, 2, 7, 5, 8, 0};

    for (i = 0; i < 10; i++){
        printf("%3d", m[i]);
    }
    printf("\n");
    selection_sort(m, 10);

    for (i = 0; i < 10; i++){
        printf("%3d", m[i]);
    }

    return (0);
}
