#include <stdio.h>

struct profile{
    char name[20];
    int height;
    int weight;
};

int main(void)
{
    struct profile student;

    printf("name==");
    scanf("%s",student.name);
    printf("height==");
    scanf("%d",&student.height);
    printf("weight==");
    scanf("%d",&student.weight);

    printf("%s's height is %d, weight is %d",student.name,student.height,student.weight);

    return(0);
}