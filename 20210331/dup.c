#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void main(int argc,char *argv[]){
    
    int ofd,nfd;

    if ( (ofd = creat("myfile",0600)) == -1){
        printf("파일 만들기 실패");
    }

    write(ofd,"hihihi",6);
    char a = '\n';
    write(ofd,&a,1);
    nfd = dup(ofd);
    write(nfd,"잘되나 한글",16);
    exit(0);
}
