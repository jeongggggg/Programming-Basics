#include <stdio.h>

// ���� num�� �Է¹ް�, 2�� ����� ��츸 '2�� ���' ���

int main() {
	int num;

	printf("enter your number :");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("even number num = %d \n", num);
	}

	return 0;
}