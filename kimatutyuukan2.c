#include <stdio.h>
int main(void)
{
    int a;
    printf("誕生月>>");
    scanf("%d",&a);
    int b;
    printf("誕生日>>");
    scanf("%d",&b);

    if((3 == a && b >= 21)||(4 == a && b <= 19)){
        printf("牡羊座♈");
    }
    else if((4 == a && b >= 20)||(5 == a && b <= 20)){
        printf("牡牛座♉");
    }
    else if((5 == a && b >= 21)||(6 == a && b<= 21)){
        printf("双子座♊");
    }
    else if((6 == a && b >= 22)||(7 == a && b <= 22)){
        printf("蟹座♋");
    }
    else if((7 == a && b >= 23)||(8 == a && b <= 22)){
        printf("獅子座♌");
    }
    else if((8 == a && b >= 23)||(9 == a && b <= 22)){
        printf("乙女座♍");
    }
    else if((9 == a && b >= 23)||(10 == a && b <= 23)){
        printf("天秤座♎");
    }
    else if((10 == a && b >= 24)||(11 == a && b <= 22)){
        printf("蠍座♏");
    }
    else if((11 == a && b >= 23)||(12 == a && b <= 21)){
        printf("射手座♐");
    }
    else if((12 == a && b >= 22)||(1 == a && b <= 19)){
        printf("山羊座♑");
    }
    else if((1 == a && b >= 22)||(2 == a && b <= 18)){
        printf("水瓶座♒");
    }
    else if((2 == a && b >= 19)||(3 == a && b <= 20)){
        printf("魚座♓");
    }
    return(0);
}