#include <stdio.h>
#include <stdlib.h>
#define N 3

// N명의 학생의 성적을 저장하기 위하여 동적 메모리를 할당하는 프로그램을 완성하세요.

int main(){

    int *stu, i;

    stu = (int *)malloc(N * sizeof(int));

    printf("%d명 학생의 성적을 입력하세요 \n", N);

    for (i = 0; i < N; i++){
        scanf("%d", (stu + i));
    }

    printf("%d명 학생의 성적을 출력합니다 \n", N);

    for (i = 0; i < N; i++){
        printf("%d \n", *(stu + i));
    }

    free(stu);
    
    return 0;
}