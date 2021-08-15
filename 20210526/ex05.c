#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

    printf("before process id = [%d]\n",getpid());
    fork();
    printf("after process id = [%d]\n",getpid());
}
