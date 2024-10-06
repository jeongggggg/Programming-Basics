#include <stdio.h>

/*
    다음의 조건에 따라 코드를 작성해보세요
    - 다음의 구조체 user에 대한 배열 생성 : test[3]
    - 구조체 멤버 : 정수형 변수 id, 크기 30의 문자열 name
    - 멤버들 정보입력 후 출력(최소 3개 이상)
*/

struct user{
    int id;
    char name[30];
};

int main(){
    struct user test[3];
    int i;

    for (i = 0; i < 3; i++){
        scanf("%d", &test[i].id);
        scanf("%s", &test[i].name);
    }

    for (i = 0; i < 3; i++){
        printf("\n %d \t %s \n", test[i].id, test[i].name);
    }
}