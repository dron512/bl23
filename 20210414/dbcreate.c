#include "student.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

void printUse(char *content){
    printf("%s\n", content);
}
int main(int argc,char** argv){
    struct student wstu;
    struct student rstu;
    int fd;
    // O_EXCL 파일 있으면 만들기 실패 -1반환
    fd = open(argv[1],O_RDWR|O_CREAT|O_EXCL,0664);
    if( fd == -1){
        printUse("파일 열기 실패");
        return -1;
    }

    printf("이름 학번 성적\n");
    scanf("%s %d %d",wstu.name,&wstu.id,&wstu.score);
    write(fd,&wstu,sizeof(wstu));

    lseek(fd,sizeof(wstu)*wstu.id,SEEK_SET);
    
    printf("이름 학번 성적\n");
    scanf("%s %d %d",wstu.name,&wstu.id,&wstu.score);
    write(fd,&wstu,sizeof(wstu));

    lseek(fd,sizeof(wstu)*wstu.id,SEEK_SET);

    printf("이름 학번 성적\n");
    scanf("%s %d %d",wstu.name,&wstu.id,&wstu.score);
    write(fd,&wstu,sizeof(wstu));

    lseek(fd,sizeof(wstu)*wstu.id,SEEK_SET);

    printf("이름 학번 성적\n");
    scanf("%s %d %d",wstu.name,&wstu.id,&wstu.score);
    write(fd,&wstu,sizeof(wstu));

/*
    if( ( read(fd,&rstu,sizeof(rstu)) ) >0){
        printf("이름 = %s",rstu.name);
        printf("학번 = %d",rstu.id);
        printf("성적 = %d",rstu.score);
    }
*/
    return 0;
}
