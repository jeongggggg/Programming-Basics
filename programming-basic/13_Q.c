#include <stdio.h>

// n�� �Է¹ް�, 1~n ���� 3�� ����� ������ ��� ���� ����ϱ� ���� �ڵ��� �Ϻ��Դϴ�. �ڵ带 �ϼ��غ�����.
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