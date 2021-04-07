#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void main(int argc,char *argv[]){
    // shift + v 블럭 지정 :norm i// 주석설정
    // shift + v 블럭 지정 :norm 2x 주석 설정 해제

    int wfd;

    if ( (wfd = open(argv[1],O_RDWR|O_CREAT|O_TRUNC,0664) ) == -1){
        printf("파일만들기 실패");
    }
    else{
        printf("파일만듬");
    }

    write(wfd,"abcdefg",6);
    int cpfd = dup(wfd);
    write(cpfd,"qweru",5);
    close(wfd);
}
