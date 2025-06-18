#include <stdio.h>

int main(void)
{
    int num;

    printf("1から10までの整数=");
	scanf("%d", &num);

    if (1 <= num && num <= 10){
		printf("正解です\n");
    }
	else {
		printf("間違いです\n");
	}

	return (0);
}
