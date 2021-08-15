#include <stdio.h>
#include <stdlib.h>

void myfunc1(){
    printf("종료함수 1\n");
}
void myfunc2(){
    printf("종료함수 2\n");
}
void myfunc3(){
    printf("종료함수 3\n");
}
int main(){
    atexit(myfunc1);
    atexit(myfunc2);
    atexit(myfunc3);
    exit(0);
}
