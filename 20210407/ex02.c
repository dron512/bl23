#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void main(){
    int fd;
    char chs[512];
    
    fd = open( "a.txt", O_RDONLY );
    if( fd == -1){
        printf("읽기모드 파일 열기 실패\n");
    }
    else{
        printf("읽기모드 파일 열기 성공\n");
    }
    
    read(fd,chs,512);
    printf("chs = %s \n" ,chs);
}
