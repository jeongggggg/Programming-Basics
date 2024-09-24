#include <stdio.h>
#define ROW 3
#define COL 3

/*
    다음 각 학생들의 성적의 합과 평균을 구하여라

    학생번호    중간    기말    과제
    1           100     80      80
    2            99     90      80
    3           100     99      80
*/

int main(){
    int test[ROW][COL] = {{100,80,80},{99,90,80},{100,99,80}};
    int i,j;
    int sum[ROW] = {0};
    float avg[ROW] = {0.0};

    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL; j++){
            printf("test[%d][%d] = %d \n", i, j, test[i][j]);
            sum[i] = sum[i] + test[i][j];
        }
        avg[i] = sum[i] / COL;
        printf("%d번째 학생의 성적 합 : %d \n", (i + 1), sum[i]);
        printf("%d번째 학생의 성적 평균 : %5.2f \n", (i + 1), avg[i]);
        printf("\n\n");
    }

    return 0;
}