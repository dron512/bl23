#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char* perm(mode_t mode){
    static char perms[10]="---------";

    if (mode & 4) {
        //printf("다른 사용자들 읽기 권한 있음\n");
        perms[10-3]='r';
    }
    if (mode & 2) {
        //printf("다른 사용자들 쓰기 권한 있음\n");
        perms[10-2]='w';
    }
    if (mode & 1) {
        //printf("다른 사용자들 실행 권한 있음\n");
        perms[10-1]='x';
    }

    return perms;
}
int main(int argc,char **argv){
    struct stat stbuf;

    // 커서를 함수로 옮기고 shift + k 드래그 해서 ctrl+c 마우스로 우클릭 
    int ret = lstat(argv[1], &stbuf);
    if(ret == -1){
        printf("stat 실패\n");
        return -1;
    }

    if (S_ISREG(stbuf.st_mode)) 
        printf("%s \n", "일반 파일");
    if (S_ISDIR(stbuf.st_mode)) 
        printf("%s \n", "디렉터리");

    printf("%s\n",perm(stbuf.st_mode));
    
    exit(0);
}
