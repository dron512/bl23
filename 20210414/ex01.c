#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
    파일 열어서 읽기 
*/
int main(int argc,char** argv){
    int fd = open(argv[1],O_RDWR);
    if (fd == -1){
        perror("파일열기실패");
        return -1;
    }
#define BUF_SIZE 512
    char buf[BUF_SIZE];
    int size=0;
    lseek(fd,3,SEEK_SET);
    while( (read(fd,buf,BUF_SIZE))>size){
        printf("%s",buf);
    }
    return 0;
}
