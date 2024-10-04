#include <stdio.h>

/*
    다음 조건에 맞도록 코딩해보세요.
    - dept는 sw, comp, hacking으로 열거
   - dept2는 sw, comp, hacking의 문자열이 저장된 2차원 배열
   - enum dept 형으로 dept3를 선언하고, dept3=sw로 지정. 해당 학과명을 출력
*/

int main(){
    enum dept1 {sw, comp, hacking};
    char *dept2[] = {"sw","comp","hacking"};
    enum dept1 dept3;
    dept3 = sw;

    printf("%d번째 학과는 %s \n", dept3, dept2[dept3]);
}