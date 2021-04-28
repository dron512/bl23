#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int main(int argc,char** argv){
    DIR *dir;
    struct dirent *filedp;
    struct stat stbuf;
    char path[32];
    char stpath[32];

    if(argc == 1){
        strcpy(path,".");
    }else{
        strcpy(path,argv[1]);
    }
    //printf("path =%s\n",path);
    if( (dir = opendir( path )) != NULL){
       while( (filedp = readdir(dir)) !=NULL ){
            sprintf(stpath,"%s/%s",path,filedp->d_name);
            lstat(stpath,&stbuf);
            printf("%5d %s\n",stbuf.st_size,filedp->d_name);
            //printf("stpath = %s\n",stpath);
            //printf("%s\n",filedp->d_name);
       }
    }
    closedir(dir);
    exit(0);
    return 0;
}
