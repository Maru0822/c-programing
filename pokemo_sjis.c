#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct monster {
    int no;
    char name[50];
    char type1[50];
    char type2[50];
    char spec1[50];
    char spec2[50];
    char specd[50];
    int hp;
    int atk;
    int def;
    int satk;
    int sdef;
    int quick;
    int sum;
};

int main(void)
{
    FILE *fp;
    struct monster monsters[1000]; //�|�P�����f�[�^���i�[����\���̔z��
    int i;
    int no; //�t�@�C������ǂݍ��񂾃|�P�����̐�
    char buf[450];

    //�t�@�C������֘A�i�t�@�C���̃I�[�v���ƃG���[�����j
    fp = fopen("pokemon_status.csv", "r");
    if (fp == NULL){
        printf("file io error!\n");
        exit(EXIT_FAILURE);
    }

    //���ږ��̍s��ǂݎ̂Ă�
    fgets(buf, sizeof(buf), fp);

    no = 0;
    //�ŏ��̍s�i���ڍs���΂��j����Ō�܂ł̘A���ǂݍ���
    while (fgets(buf, sizeof(buf), fp) != NULL){
        sscanf(buf, "%d,%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%d,%d,%d,%d,%d,%d,%d"
        , &monsters[no].no, monsters[no].name
        , monsters[no].type1, monsters[no].type2
        , monsters[no].spec1, monsters[no].spec2, monsters[no].specd
        , &monsters[no].hp, &monsters[no].atk, &monsters[no].def
        , &monsters[no].satk, &monsters[no].sdef
        , &monsters[no].quick, &monsters[no].sum);

/*���͊m�F�p
        printf("%d:%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d,%d,%d\n"
        , monsters[i].no, monsters[i].name
        , monsters[i].type1, monsters[i].type2
        , monsters[i].spec1, monsters[i].spec2, monsters[i].specd
        , monsters[i].hp, monsters[i].atk, monsters[i].def
        , monsters[i].satk, monsters[i].sdef
        , monsters[i].quick, monsters[i].sum);
*/
        no++; //�f�[�^���̃J�E���g
    }

    printf("------ �\���̔z��̒��g -------\n");
    for (i = 0; i < no; i++){
        printf("%s(%d)\n", monsters[i].name, monsters[i].no);
    }

    fclose(fp);//�t�@�C������֘A�i�t�@�C������鏈���j
    return (0);

}