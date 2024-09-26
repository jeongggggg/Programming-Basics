#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

/*
    주사위 던지는 프로그램을 작성해보세요
    - 함수 원형으로 선언할 것
    - 함수명
    ㄴ void jusa(int n); // n회의 주사위를 던져, 각 회당 나온 수를 출력
    - 주사위의 값을 저장할 때 배열을 사용할 것(a[n])
    - 다음의 헤더파일 사용할 것
    ㄴ #include<stdio.h> 
    ㄴ #include<stdilb.h> 
    ㄴ #include<time.h> 
*/

void jusa(int n);

int main(){
    int i;

    printf("주사위를 몇 번 던질까요? \n");
    scanf("%d", &i);

    jusa(i);

    return 0;
}

void jusa(int n){

    srand(time(NULL)); // srand(unsigned(time(NULL)));

    int i, a[6] = {0};

    printf("\n \n 총 %d 회 주사위를 던집니다 \n", n);

    for (i = 0; i < n; i++){
        a[i] = rand() % 6 + 1;
        printf("%d \n", a[i]);
    }
    

}