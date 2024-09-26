#include <stdio.h>
#define PW 0000

/*
    - 함수원형 사용할 것
    - defines 사용하여 pw를 지정할 것 : 0000
    - 함수명 : nt check(int pass);
    ㄴ int check(int pw);
    ㄴ 정수값 4자리 비밀번호 입력
    ㄴ 비밀번호 일치 시 : "*번 시도. success"
    ㄴ 비밀번호 일치하지 않으면 번 시도. fail, again"
    - 비밀번호 입력 및 확인을 위한 사용자 정의 함수를 호출하기

*/

int check(int pw);

int main(){

    int pw, result = 0;
    
    while (result != 1){

        printf("password(length 4) : ");

        scanf("%d", &pw);

        result = check(pw);
    }
    
    return 0;
}

int check(int pw){

    static int count = 0; // static 으로 선언하지 않았다면 시도는 계속 1회, 기억하지 못함
    count ++;

    if (pw == PW){
        printf("%d번 시도 : success \n", count);
        return 1;
    } else{
        printf("%d번 시도 : fail, again \n", count);
        return 0;
    }
    

}