#include <stdio.h>

/*
    다음은 두과목(각 과목당 2명의 학생의 score 존재)에 대하여, 
    각 과목의 합과 평균을 각각 출력하는 코드의 일부입니다. 코드를 완성하세요.
*/

int main(){
    double score[2][2] = {99, 88, 100, 99};
    double sum[2] = {0}, avg[2] = {0};
    int i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            sum[i] = sum[i] + score[i][j];
        }
        avg[i] = sum[i] / 2;
    }

    for (i = 0; i < 2; i++){
        printf("%d번째 과목의 합 : %lf, 평균 : %lf \n", i + 1, sum[i], avg[i]);
    }

    return 0;
}