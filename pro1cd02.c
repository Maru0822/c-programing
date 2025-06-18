#include <stdio.h>

int main(void)
{
   char moji;

   for(moji = 0x61;moji <= 0x7A; moji++){
       printf("%c",moji);
   } 

   return(0);
}