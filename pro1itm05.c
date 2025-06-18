#include<stdio.h>
int main(void){
    int i;
    i=1;
    for(i=1; i<=100; i++){
        if(i%2==0){
          printf("偶数%d\n",i);  
        }
        
    }
    return(0);
}