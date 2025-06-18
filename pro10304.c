#include <stdio.h>

int main(void)
{
    int i;
    float f;

    printf("i = %d, f = %f\n", i, f);

    i = 10;
    f = 3.14;
    printf("i = %d, f = %f\n", i, f);

    i = i + 10;
    f = i * f;
    printf("i = %d, f = %f\n", i, f);

    return (0);
}
