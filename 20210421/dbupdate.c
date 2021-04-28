#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void print_use(const char * con){
    printf("%s\n",con);
}
int main(int argc,char ** argv){
    // ctrl + w + w 창이동
    struct student rec;
    int fd;
    fd = open(argv[1], O_RDWR);
    if ( fd == -1 ){
        print_use("파일 열기 실패 파일 이름이 없음..");
        return -1;
    }
    while(1){
        print_use("학번입력");
        scanf("%d",&rec.id);

        lseek(fd, rec.id * sizeof(rec), SEEK_SET);
        read(fd, &rec, sizeof(rec));
        printf("이름 = %s 학번 = %d 성적 = %d\n", rec.name, rec.id, rec.score);

        print_use("이름 학번 성적 순으로 입력하세요");
        scanf("%s %d %d",rec.name,&rec.id,&rec.score);

        lseek(fd, (long)-sizeof(rec),SEEK_CUR);
        write(fd, &rec, sizeof(rec));

        print_use("수정되었습니다");
        char yn = 'n';
        print_use("계속할래요 y/n");
        scanf(" %c",&yn);
        if( yn !='y'){
            break;
        }
    }
}








