#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    char name[20];
};

int main(){
    int n;
    struct student *ptr;

    printf("학생 몇명 받을래\n");
    scanf("%d",&n);

    ptr = (struct student*)malloc(n*sizeof(struct student));

    for(int i =0; i<n; i++){
        printf("학생 이름");
        scanf("%s",ptr[i].name);
        ptr[i].id = i;
    }
    for(int i =0; i<n; i++){
        printf("학생 이름");
        printf("%s",ptr[i].name);
        printf("학생 id = %d\n",ptr[i].id);
    }
    
    for(int i =0; i<n; i++){
        printf("(ptr+i) = %d\n",(ptr+i));
    }
    for(int i =0; i<n; i++){
        printf("ptr[i] = %d\n",ptr[i]);
    }
}
