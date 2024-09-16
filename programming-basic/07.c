#include <stdio.h>

// 정수값 score 입력
// score가 2의 배수인 경우 'two' 입력
// score가 2의 배수가 아니면서, 3의 배수인 경우 'three' 출력
// 이외는 'etc' 출력

int main() {
	int score;

	printf("score : ");
	scanf_s("%d", &score);

	if (score % 2 == 0) {
		printf("two\n");
	}

	else if (score % 3 == 0) {
		printf("three\n");
	}

	else {
		printf("etc\n");
	}

	return 0;
}