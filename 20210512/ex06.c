#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 80

int main(){
    FILE *fp1;
    char line[MAX_LINE];
    int index =1;
    fp1 = fopen("ls.txt","r");

    if (fp1 == NULL){
        perror("파일열기실패\n");
    }
    while ( (fgets(line,MAX_LINE,fp1)) != NULL){
        //        int a = strlen(line);
        //        line[a] = ' ';
        //        line[a+1] = index-48;
        //        line[a+3] = '\0';
        //        fputs(line,stdout);
        printf("%3d %s",index++,line);
    }
    fclose(fp1);
    return 0;
}
