#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> 
#include <unistd.h>


int main(){
    
    int ret = symlink("s.txt","slink.txt");
    if (ret == -1){
        perror("에러");
        exit(1);
    }

}
