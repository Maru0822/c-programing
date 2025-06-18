#include <stdio.h>

int main(void)
{
    int year;

    printf("西暦=");
	scanf("%d", &year);
//うるう年になる条件
//条件１、400で割り切れる年はうるう年
//条件２、4で割り切れる　かつ　100で割り切れない年はうるう年である
    if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0)){
        printf("今年はうるう年です\n");
    }
	else {
        printf("今年はうるう年ではありません\n");
	}
    
    return (0);
}
