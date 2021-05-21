#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    printf("락걸렸냐");
    int fd = open("ls.txt",O_RDWR,0666);
    if (fd ==-1){
        perror("파일열기실패");
    }

    int ret = lockf(fd,F_TEST,0);
    if (ret == 0){
        printf(" NO \n");
    }
    else if(ret ==-1){
        perror("락확인실패\n");
    }
    else{ 
        printf(" YES \n");
    }
}
