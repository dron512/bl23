#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    int pid = fork();

    if ( pid == 0){
        printf("child1 = [%d]\n",getpid());
        exit(0);
    }

    int pid1 = fork();
    if( pid1 == 0 ){
        printf("child2 = [%d]\n",getpid());
        exit(0);
    }

    printf("getpid = [%d]\n",getpid());

}
