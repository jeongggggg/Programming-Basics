#include <stdio.h>

// 정수num1, num2에 대하여 값을 입력
// 연산자 op에 따라 사칙연산 후 출력
// op가 'q'이면, 반복 종료
// while, switch~case 사용

int main() {

	char op;
	int n1, n2;

	while (1) {
		printf("enter two number \n");
		scanf("%d%d", &n1, &n2);
		printf("enter operator:");
		scanf(" %c", &op,2);

		if (op == 'q') {
			printf("end\n");
			break;
		}

		switch (op) {
			case '+':
				printf("%d + %d = %d \n", n1, n2, n1 + n2);
				break;
			case '-':
				printf("%d - %d = %d \n", n1, n2, n1 - n2);
				break;
			case '*':
				printf("%d * %d = %d \n", n1, n2, n1 * n2);
				break;
			case '/':
				// printf("%d / %d = %f \n", n1, n2, float(n1) / n2); // 실수를 모두 보고 싶으면 float로 변수를 묶어주면 된다, dev c++ 문법
				printf("%d / %d = %f \n", n1, n2, (float)n1 / n2);
				break;
			default:
				printf("Wrong operation \n");
				break;
		}
	}
	



	return 0;
}