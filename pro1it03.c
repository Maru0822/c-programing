#include<stdio.h>
int main(void)
{
    int a;
    a=0;
    int b;
    b=1;
    while(a<10){
        printf("%3d",b);//%3dは三文字分開ける　縦に並んだ時にきれいになる
        b++;
        a++;
    }
    return(0);
}