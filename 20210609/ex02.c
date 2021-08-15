#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(){
    alarm(5);
    printf("무한루프 시작\n");
    while(1){
        sleep(1);
        printf("1...sec ...after\n");
    }
    printf("실행 안됨\n");
}
