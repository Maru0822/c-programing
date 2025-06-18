#include <stdio.h>
int main(void)
{
  int a;
  a=1;
  int i;

  printf("長さ==");
  scanf("%d",&a);
  
  for (i = 0; i < a; i++){

      if(i % 2 == 0){
          printf("+");
      }
      else{
          printf("*");
      }
  }
  return(0);
} 