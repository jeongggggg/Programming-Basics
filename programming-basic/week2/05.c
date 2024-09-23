#include <stdio.h>

// 정수 num을 입력받고, 2의 배수인 경우만 '2의 배수' 출력

int main() {
	int num;

	printf("enter your number :");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("even number num = %d \n", num);
	}

	return 0;
}