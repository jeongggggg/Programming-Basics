#include <stdio.h>

// ��Ģ���� ��ȣ�� ���� op�� �� ���� n1, n2 �Է�
// op�� ���� ���� ��� ���
// switch ~ case ���

int main() {

	char op;
	int n1, n2;

	printf("enter two number \n");
	scanf_s("%d%d", &n1, &n2);

	printf("enter operator:");
	scanf_s(" %c", &op,2); // *������ �� �� �ְ� ��ĭ ���� �Է�

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
		// printf("%d / %d = %f \n", n1, n2, float(n1) / n2); // �Ǽ��� ��� ���� ������ float�� ������ �����ָ� �ȴ�, dev c++ ����
		printf("%d / %d = %f \n", n1, n2, (float)n1 / n2);
		break;
	default:
		printf("Wrong operation \n");
		break;
	}

	return 0;
}