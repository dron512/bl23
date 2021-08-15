#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    int status,child,pid;

    pid = fork();
    if (pid ==0){
        printf("child process = [%d]\n",getpid());
        sleep(3);
        exit(3);
    }
    else{
        child = wait(&status);
        printf("getpid = %d, child = %d\n",getpid(),child);
        printf("status = %d\n",status>>8);
    }

}
