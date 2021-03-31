#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#define BUFSIZE 512

void main(int argc,char* argv[]){

    char chs[BUFSIZE];
    int fd;
    ssize_t nread;

    if( (fd =open(argv[1],O_RDONLY)) == -1){
        printf("파일쓰기모드로 만들기 실패");
    }

    while ( (nread = read(fd, chs, BUFSIZE))>0){
        printf("%s",chs);
        printf("파일 사이즈 %ld", nread);
    }
    close(fd);
}
