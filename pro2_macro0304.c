#include <stdio.h>
#define MEC 42
//#define INF 38
//#define MED 34
//#define BIO 44

int main(void)
{
    #ifdef MEC
        printf("kikai ninnzuu %d",MEC);
    #elif defined INF
        printf("jouhou ninnzuu %d",INF);
    #elif defined MED
        printf("media ninnzuu %d",MED);
    #else
        printf("seibutu ninnzuu %d",BIO);
    #endif/*MEC*/

    return(0);
}