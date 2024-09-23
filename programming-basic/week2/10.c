#include <stdio.h>

// 1~100까지 짝수들의 합 구하기
// for, while문 모두 사용
int main() {

	int sum = 0;
	int i = 1;
	
	// for문 사용
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}

	// while문 사용
	while (i <= 100) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++; // i = i + 1;
	}

	printf("1~100까지의 짝수의 합 : %d\n", sum);

	return 0;
}