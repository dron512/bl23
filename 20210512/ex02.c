#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(){
    
    int fd = open("ls.txt",O_WRONLY,666);

    struct flock lock;
    lock.l_len = 0;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_type = F_WRLCK; // 잠금타입이 쓰기락 

    int ret = fcntl(fd, F_SETLKW, &lock);
    if( ret == -1){
        perror("락설정 실패\n");
        exit(1);
    }else{
        printf("쓰기락설정성공\n");
        getchar(); // 사용자 입력을 기다리기
        getchar();
    }
    
    lock.l_type = F_UNLCK; // 잠금타입 풀기
    ret = fcntl(fd,F_SETLKW, &lock);
    if( ret== -1 ){
        perror("락설정 해제 실패\n");
        exit(1);
    }else{
        printf("락설정 해제 성공\n");
    }

}
