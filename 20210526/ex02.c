#include <stdio.h>

int main(){
    char **ptr;
    extern char ** environ;

    for(ptr=environ; *ptr != 0;ptr++){
        printf("%s\n",*ptr);
    }
}

