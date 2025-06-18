#include <stdio.h>

int main(void)
{
    int i;
    int m[3]={10,20,30};
    float a[]={1.23,4.56,7.89};

    for (i = 0; i < 3; i++){
        printf("m[%d]:%d\n",i,m[i]);
    }

    for (i = 0; i < 3; i++){
        printf("a[%d]:%f\n",i,a[i]);
    }

    return(0);
}