#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFSIZE 512

int main(int argc,char * argv[]){

    int fd1,fd2,n;
    char buf[BUFSIZE];

    if ( ( fd1 = open( argv[1],O_RDONLY) ) == -1){
        printf("원본 파일 열기 실패");
        exit(1);
    }
    
    if ( ( fd2 = open( argv[2],O_WRONLY|O_CREAT|O_TRUNC,0600))==-1){
        printf("목적 파일 생성 실패");
        exit(1);
    }
    while( (n = read(fd1,buf,BUFSIZE)) >0 ){
        write(fd2,buf,n);
    }
    close(fd1);
    close(fd2);
}
