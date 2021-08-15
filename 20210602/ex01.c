#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(){
    int status;
    int pid1 = fork();
    if (pid1 ==0){
       printf("chile pid1 = [%d] start\n",getpid());  
       sleep(1);
       printf("chile pid1 = [%d] end\n",getpid());  
       exit(1);
    }
    int pid2 = fork();
    if(pid2 ==0){
       printf("chile pid2 = [%d] start\n",getpid());  
       sleep(2);
       printf("chile pid2 = [%d] end\n",getpid());  
       exit(1);
    }
    int child = waitpid(pid1,&status,0);
    printf("parent getpid = %d child = %d\n",getpid(),child);
    printf("status = %d\n",status>>8);
    exit(0);
}
