#include <stdio.h>

// 구조체 멤버
struct  user{
    int id;
    char name[30];
};

int main(){
    struct user u1 ={1, "kim hanyang"};

    printf("id = %d, name = %s \n", u1.id, u1.name);    

    return 0;
}