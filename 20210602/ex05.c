#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    printf("parent pid =%d prgp=%d\n",getpid(),getpgrp());

    int pid = fork();

    if(pid == 0){
        printf("\nchild pid = %d pgrp = %d\n",getpid(),getpgrp());     
    }
}
