#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/*
 *  link symlink
 *  fcntl lockf 파일락
 *  fopen(파일명,"r,w,a")
 *  getc(), putc()
 */
int main(int argc,char **argv){
    FILE *fp;
    int c;
    if ( argc <2 ){
        // 입력 받은 파일이 없으면 키보드로 부터 읽기 위해
        // 표준입력
        fp = stdin;
    }
    else {
        fp = fopen(argv[1],"r");
    }
    c = getc(fp);
    while(c !=EOF){
        putc(c,stdout);
        c = getc(fp);
    }
    exit(1);
}
