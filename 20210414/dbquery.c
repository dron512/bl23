#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char ** argv){
    
    int fd;
    int size =0;
    struct student rstu;
    char yn='Y';

    fd = open( argv[1],O_RDONLY);

    if ( fd == -1 ){
        printf("파일 읽기 실패\n");
        return -1;
    }

    do{
        printf("학번 입력해라\n");
        scanf("%d",&rstu.id);
        lseek(fd, rstu.id*sizeof(rstu), SEEK_SET);

        read(fd,&rstu,sizeof(rstu));
        printf("이름 = %s",rstu.name);
        printf("학번 = %d",rstu.id);
        printf("점수 = %d\n",rstu.score);
        
        printf("계속 하시겠습니까??\n");
        scanf(" %c",&yn);

    }while(yn=='Y');

    return 0;
}







