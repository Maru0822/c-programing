#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    int x;
    int some;
    some = 0;

    fp = fopen("in3.txt", "r");
    if (fp == NULL){
        printf("file open error!\n");
        exit(EXIT_FAILURE);
    }
    fp = fopen("in3.txt", "a");
    if (fp == NULL){
        printf("file open error\n");
        exit(EXIT_FAILURE);
    }
    fgets(x, sizeof(int), fp);


    while (fscanf(fp, "%d", &x)!= EOF){
        fscanf(fp,"%d",&x);
        some += x;
    }
    fprintf(fp, "%d", some);

    fclose(fp);

    return(0);
}