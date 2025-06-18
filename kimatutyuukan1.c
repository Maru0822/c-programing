#include <stdio.h>
int main(void)
{
    int a;
    printf("西暦>>");
    scanf("%d",&a);

    if((1900 <= a)&&(a <= 1912)){
        printf("明治");
    }
    else if(1900 > a){
        printf("(´・ω・)");
    }
    else if((1912 < a)&&(a <= 1926)){
        printf("大正");
    }
    else if((1926 < a)&&(a <= 1989)){
        printf("昭和");
    }
    else if((1989 < a)&&(a <= 2019)){
        printf("平成");
    }
    else{
        printf("令和");
    }

    return(0);
}