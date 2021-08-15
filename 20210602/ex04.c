#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char* argv[]){

    int fd = open(argv[1],O_CREAT|O_TRUNC|O_WRONLY,0660);

    dup2(fd,1);
    close(fd);

    printf("test\n");
}
