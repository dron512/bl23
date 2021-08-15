#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int id;
    char name[30];
    struct student *next;
};
void addFNode(struct student *head,int id,char *name){
    struct student *temp = (struct student*)malloc(sizeof(struct student));    
    temp->id = id;
    strcpy(temp->name,name);

    temp->next = head->next;
    head->next = temp;
}
void printnodes(struct student *head){
    struct student *temp;
    temp = head->next;
    while(temp != NULL){
        printf("temp->id = %d",temp->id);
        printf("temp->name = %s\n",temp->name);
        temp = temp->next;
    }
}
int main(){
    struct student head;
    struct student *cur;
    head.next = NULL;
    addFNode(&head,1,"홍길동");
    addFNode(&head,2,"박길동");
    addFNode(&head,3,"김길동");
    printnodes(&head);
}
