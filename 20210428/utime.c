#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <utime.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc,char **argv){
    struct stat stbuf;
    struct utimbuf timbuf;

    int ret = stat(argv[1],&stbuf);
    if(ret == -1){
        printf("파일상태값 가져오기 실패\n");
    }

    timbuf.actime = stbuf.st_atime;
    timbuf.modtime = stbuf.st_mtime;

    utime(argv[2],&timbuf);

    return 0;
}
