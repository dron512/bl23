#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arc,char* argv[]){
    
    int fd;

    if( ( fd = open(argv[1],O_RDWR)) == -1){
        printf("파일열기 실패");
    }
    else{
        printf("파일열기 성공");
    }

    close(fd);

//    for(int i =0; i<arc ; i++){
//        printf("argv[%d] = %s\n",i,argv[i]);
//    }


}









