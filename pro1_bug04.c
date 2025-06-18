#include <stdio.h>

int main(void)
{
    float sintyou;
    float taijyu;
    float tekisei;
    float bmi;

    printf("身長(cm)=");
    scanf("%f", &sintyou);

    printf("体重(kg)=");
    scanf("%f", &taijyu);

    tekisei = (sintyou / 100) * (sintyou / 100) * 22;
    bmi = taijyu / ((sintyou / 100) * (sintyou / 100));

    printf("あなたの適正体重は%.1fkgです\n", tekisei);
    printf("あなたの肥満度(BMI)は%.1fです\n", bmi);
//if文の標準とやせすぎの順番が逆
    printf("あなたは");
    if (bmi <= 24){
        printf("標準");
    }
	else if (bmi <=20){
        printf("やせすぎ");
    }
    else if (bmi <= 26.5){
        printf("太り気味");
    }
    else {
        printf("太りすぎ");
    }
    printf("です\n");

    return (0);
}
