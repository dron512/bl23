#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    
    int pid1 = fork();
    if(pid1 ==0){
        execl("/bin/echo","echo","HELLO",NULL);
        exit(0);
    }
}
