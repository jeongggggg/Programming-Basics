#include <stdio.h>

// 구조체 멤버
struct joinDate{
    int year;
    int month;
    int day;
};

struct user{
    struct joinDate date;
    int id;
    char name[30];
};

int main(){
    struct user u1 ={{2020, 12, 31}, 1, "kim"};

    printf("year : %d \n month = %d \n day = %d \n id = %d \n name = %s \n", u1.date.year, u1.date.month, u1.date.day, u1.id, u1.name);    

    return 0;
}