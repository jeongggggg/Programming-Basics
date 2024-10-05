#include <stdio.h>

// 구조체 배열
struct user{
    int id;
    char name[30];
};

int main(){
    struct user u1[2];
    int i;
    for(i = 0; i < 2; i++){
        scanf("%d %s",&u1[i].id, &u1[i].name);
    }

    for(i = 0; i < 2; i++){
        printf("id=%d name=%s\n",u1[i].id, u1[i].name);
    }

    return 0;
}
