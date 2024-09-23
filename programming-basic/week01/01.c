#include <stdio.h> 

// int a=10, b=20;
// a와 b의 사칙연산 및 나머지 구하기

int main() {
	int a = 10, b = 20;
	int an1, an2, an3, an4, an5;

	an1 = a + b;
	an2 = a - b;
	an3 = a * b;
	an4 = a / b;
	an5 = a % b;

	printf("a=%d b=%d\n", a, b);
	printf("add=%d sub=%d mul=%d div=%d rest=%d\n", an1, an2, an3, an4, an5);

	return 0;
}