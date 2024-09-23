#include <stdio.h>

// 사칙연산 기호인 문자 op와 두 정수 n1, n2 입력
// op에 따라 연산 결과 출력
// switch ~ case 사용

int main() {

	char op;
	int n1, n2;

	printf("enter two number \n");
	scanf_s("%d%d", &n1, &n2);

	printf("enter operator:");
	scanf_s(" %c", &op,2); // *공란이 들어갈 수 있게 한칸 띄우고 입력

	switch (op) {
	case '+' :
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

	return 0;
}