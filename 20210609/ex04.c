#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

struct sigaction newact;
struct sigaction oldact;
void myfunc(){
    printf("SIGINT 발생시 호출되는 함수\n");
    printf("한번더 누르면 옜날꺼로 바껴서 종료됩니다\n");
    sigaction(SIGINT,&oldact,NULL);
}
int main(){
    newact.sa_handler = myfunc;
    sigfillset(&newact.sa_mask);

    sigaction(SIGINT,&newact,&oldact);
    while(1){
        sleep(1);
        printf("계속 되는중\n");
    }
    exit(0);
}
