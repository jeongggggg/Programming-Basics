#include <stdio.h>

// n을 입력받고, n줄만큼 직각삼각형을 출력하는 코드를 완성해 보세요.
int main() {

	int i, j, n;
	printf("n: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
	}

	printf("\n");


	return 0;
}