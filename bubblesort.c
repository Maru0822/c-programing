//bubblesort.c
#include <stdio.h>

void  bubble_sort(int  a[],  int  n)
{
	int  i,  j,  tmp;

	for  (i  =  0;  i  <  n  -  1;  i++){
		for  (j  =  n  -  1;  j  >  i;  j--){
			if  (a[j  -  1]  >  a[j]){
				tmp  =  a[j];
				a[j]  =  a[j  -  1];
				a[j  -  1]  =  tmp;
			}
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
    bubble_sort(m, 10);

    for (i = 0; i < 10; i++){
        printf("%3d", m[i]);
    }

    return (0);
}
