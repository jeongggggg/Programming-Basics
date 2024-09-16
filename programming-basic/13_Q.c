#include <stdio.h>

// n을 입력받고, 1~n 사이 3의 배수를 제외한 모든 수를 출력하기 위한 코드의 일부입니다. 코드를 완성해보세요.
int main() {

	int i, n;
	printf("n:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		if (1 % 3 == 0) 
			continue;
		printf("%d \t", i);
	}


	return 0;
}