#include <stdio.h>

void  insertion_sort(int  a[],  int  n)
{
	int  i,  j,  tmp;

	for  (i  =  1;  i  <  n;  i++){
        j = i;
        while (j > 0 && a[j - 1] > a[j]){
            tmp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = tmp;

            j--;
        }
	}
}

int main(void)
{
    int i;
    int m[10] = {6, 4, 9, 1, 3, 2, 7, 5, 8, 0};

    for (i = 0; i < 10; i++){
        printf("%3d", m[i]);
    }
    printf("\n");
    insertion_sort(m, 10);

    for (i = 0; i < 10; i++){
        printf("%3d", m[i]);
    }

    return (0);
}
