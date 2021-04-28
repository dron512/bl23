#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char** argv){

    int ret = chown(argv[1],getuid(),getuid());
    if(ret == -1 ){
        printf("소유자 변경실패\n");
    }

    return 0;
}
