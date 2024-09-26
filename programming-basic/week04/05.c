#include <stdio.h>
/*
    원의 반지름을 입력받고, 넓이를 구하는 프로그램
    - 함수 원형으로 선언할 것
    - 함수명
    ㄴ double getVal() // 반지름 입력, 반지름 반환
    ㄴ double getArea(double a) // 반지름에 대하여 원의 넓이를 구하여 반환
*/

double getVal();
double getArea(double a);

int main(){

    double r, area;

    r = getVal();
    area = getArea(r);

    printf("radius : %lf, Area : %lf \n", r, area);

    return 0;
}

double getVal(){
    double r;

    printf("원의 반지름을 입력하시오 : ");
    scanf("%lf", &r);

    return r;
}

double getArea(double r){
    return 3.141592 * r * r;
}