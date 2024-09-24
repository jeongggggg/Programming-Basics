#include <stdio.h>
#define ROW 3
#define COL 3

/*
다음과 같이 5명의 성적을 출력해보자. (각 학생이 평균은 각 평가항목 나누기 3)

학생번호 중간 기말 과제
1       100    80  80
2       99     90  80
3       100    99  80

*/
int main(){
    int test[ROW][COL] = {{100,80,80},{99,90,80},{100,99,80}};
    int i, j;

    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL; j++){
            printf("test[%d][%d] = %d\n", i, j, test[i][j]);
        }
    }
}