#include <stdio.h>

// n�� �Է¹ް�, n�ٸ�ŭ �����ﰢ���� ����ϴ� �ڵ带 �ϼ��� ������.
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