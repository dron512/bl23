#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[100];
    int id;
    int score;
};

// fprintf(fp,"서식문자",값들);
int main(){

    struct student rec;
    FILE *fp = fopen("student","w");
    for(int i =0; i<3 ; i++){
        printf("학생번호 학생이름 학생성적\n");
        scanf("%d %s %d",&rec.id,rec.name,&rec.score);
        fprintf(fp,"%d %s %d\n",rec.id,rec.name,rec.score);
    }

    fclose(fp);

    fp = fopen("student","r");
    for(int i =0; i<3 ; i++){
        fscanf(fp,"%d %s %d ",&rec.id,rec.name,&rec.score);
        printf("학생번호=%d 학생이름=%s 학생성적=%d\n",rec.id,rec.name,rec.score);
    }
    fclose(fp);
}
