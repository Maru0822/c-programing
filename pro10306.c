#include <stdio.h>

int main(void)
{
    float teihen;
    float takasa;
    float menseki;

    teihen = 2.3;
    takasa = 1.5;
    menseki = teihen * takasa /2;
    printf("底辺%fで高さ%fの三角形の面積は%fです\n", teihen , takasa , menseki);

    return(0);
}