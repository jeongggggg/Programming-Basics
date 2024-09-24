#include <stdio.h>

int main(){

    // 10의 크기를 가진 정수형 배열 test1을 0으로 초기화 하기
    int test[10] = {0};

    // 크기를 지정하지 않은 정수형 배열 test2의 값을 1,2,3,4,5로 초기화 하기
    int test2[] = {1,2,3,4};

    // 10의 크기를 가진 문자열 배열 test3에 "hello" 로 초기화 하기
    char test3[10] = "hello";
    // char test3[10] = {'h','e','l','l','o','\0'} -> 문자열 끝에는 항상 \0가 있어야 한다 없으면 쓰레기값까지 출력된다.
    
    int i, size;

    size = sizeof(test2)/sizeof(test2[0]);

    for (i = 0; i < 10; i++){
        printf("test[%d] = %d \n", i, test[i]);
    }

    for (i = 0; i < 10; i++){
        printf("test2[%d] = %d \n", i, test2[i]);
    }

    for (i = 0; test3[i] != '\0'; i++){
        printf("test3[%d] = %c \n", i, test3[i]);
    }

    puts(test3);
    
    return 0;
}