#include <stdio.h>

#define START_ID 100
#define NAME_SIZE 24

/*
    이름, 학번, 점수
*/
struct student{
    char name[NAME_SIZE];
    int id;
    int score;
};
