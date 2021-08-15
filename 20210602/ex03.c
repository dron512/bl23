#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc,char* argv[]){
    int status;
    int pid1 = fork();

    if(pid1 == 0){
        printf("child ps start %d",getpid());
        char* str[] = {"date",NULL};
        execvp(str[0],&str[0]);
        //execvp(argv[1],&argv[1]);
        exit(1);
    }
    else{
        int child = wait(&status);
        printf("parent ps =%d, child ps=%d\n",getpid(),child);
        printf("status = %d\n",status>>8);
        exit(0);
    }
}
