#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void myfunc(){
    printf("알람되면 호출되는함수\n");
    exit(0);
}
int main(){
    signal(SIGALRM,myfunc);
    alarm(5);
    printf("무한루프 시작\n");
    while(1){
        sleep(1);
        printf("1...sec ...after\n");
    }
    printf("실행 안됨\n");
}
