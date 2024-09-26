#include <stdio.h>
#include <stdlib.h>

/*
    앞면, 뒷면 각각 0과 1의 값을 갖는 동전 게임
    - 함수 원형으로 표시할 것
    - 두 사용자가 함수를 통하여 0, 1 값을 입력 받음
    - 두 값을 비교하여 결과를 출력함
    ㄴ 두 값이 0, 1일 때, 1인 경우 'Win'
    ㄴ 두 값이 같으면, 'same'
    - 함수명
    ㄴ 값 입력 : int get_val()
    ㄴ 값 비교 : void comp(int a, int b)
*/

int get_val(); // 0 또는 1의 값 리턴
void comp(int i, int j); // 게임 결과 리턴

int main(){

    int i, j;

    i = get_val();
    printf("연아의 값 : %d \n", i);

    j = get_val();
    printf("윤아의 값 : %d \n", j);

    comp(i, j);
    
    return 0;
}

int get_val(){

    int i;

    i = rand() % 2;

    return i;
    
}

void comp(int i, int j){

    if(i > j)
        printf("연아 win \n");
    else if(j > i)
        printf("윤아 win \n");
    else
        printf("same \n");
}