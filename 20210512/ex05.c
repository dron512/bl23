#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp1,*fp2;

    fp1 = fopen("abc.txt","r");
    fp2 = fopen("cpabc.txt","w");

    int c;
    
    while( (c=fgetc(fp1) ) != EOF){
        fputc(c,fp2);
    }

    exit(1);
    
}
