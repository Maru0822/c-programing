#include <stdio.h>
#include <conio.h>

int main(void)
{
    char x;

    x = 'a';
    while (x != 'x'){
        x = getch();

        if(x >= 'a' && x <= 'z'){
            printf("小文字\n");
        } 
        else if (x >= 'A' && x <= 'Z'){
            printf("大文字\n");
        }
        else{
            printf("その他");
        }
    }

    return(0);
}