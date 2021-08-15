#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int ret = fork();
    if (ret ==0){
        // 자식 프로세스 실행되는 코드
        printf("child = %d\n",getpid());
    }
    else{
        // 부모 프로세스 실행되는 코드
        printf("parent = %d\n",getpid());
    }

}
