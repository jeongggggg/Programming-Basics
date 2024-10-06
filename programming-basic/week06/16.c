#include <stdio.h>

/*
    다음의 사례에 대하여 자유롭게 코드를 작성해보세요.
    - date : 날짜 관련 구조체
    - user : 고객정보 관련 구조체
    - student : 학생정보 관련 구조체
*/

struct data{
    int month;
    int day;
};

struct user{
    int id;
    char name[30];
};

struct student{
    int id;
    int grade;
    char name[30]; 
}
