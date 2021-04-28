#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char** argv){

    if (argc == 1){
        printf("file name 이 필요 합니다\n");
        return -1;
    }
    if (argc == 2){
        printf("777 or 664 file 권한 입력하세요\n");
        return -1;
    }

    // 명령인수 3번째꺼 숫자 형으로 바꾸기
    int pe = strtol(argv[2],NULL,8);
    int ret = chmod(argv[1],pe);

    if( ret == -1){
        printf("파일권한 변경 실패\n");
    }
}
