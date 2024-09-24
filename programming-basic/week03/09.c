#include <stdio.h>

/*
    다음의 문제를 해결하는 코드를 작성해보세요.

    - score : 학생의 A과목 성적을 나타내는 double형 배열
    - 최대 10명의 성적을 저장 가능함
    - 10명의 학생의 성적을 입력 받고 해당 과목 점수의 평균 구하기
    - 변수(double) : sum, avg, I, j 사용
 */
int main(){
    double score[10] = {0}; // 0으로 입력해도 double 형으로 인식함
    double sum = 0.0, avg;
    int i, j;

    for (i = 0; i < 10; i++){
        scanf("%lf", &score[i]); // 변환 문자열, lf(long float) -> 잘못 적으면 에러
        sum = sum + score[i];
    }
    
    avg = sum / i;

    printf("A과목, %d명 성적의 평균 : %lf \n", i, avg);

    return 0;
}