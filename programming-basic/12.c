#include <stdio.h>

// ������ �޴��� ���� ���α׷� �����ϱ�(���� n �Է�(1~3))
// n�� 1 : 1~100���� ��
// n�� 2 : ������ �Է¹ް� �������� �ƴ��� �Ǵ�
// n�� 3 : 1~n���� ���� �� 2 �Ǵ� 3�� ����� ��
// ���ǹ� : ���� if�� ����ϱ�
// �ݺ��� : for ����ϱ�

int main() {

	int n;
	int i, year, sum;
	
	printf("�޴� : 1) 1~100���� �� ���ϱ� 2) ���� ���ϱ� 3) 1~n������ 2 �Ǵ� 3�� ��� �� ���ϱ� \n");
	scanf_s("%d", &n);

	if (n == 1) {
		sum = 0;
		for (i = 1; i <= 100; i++) {
			sum = sum + i;
		}

		printf("1~100������ �� : %d \n", sum);
	}

	else if (n == 2) {
		printf("year :");
		scanf_s("%d", &year);

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("leaf year \n");
		}
		else {
			printf("common year \n");
		}
	}

	else if (n == 3) {
		printf("n :");
		scanf_s("%d", &n);
		sum = 0;

		for (i = 0; i <= n; i++) {
			if (i % 2 == 0 || i % 3 == 0) {
				sum = sum + i;
			}

			printf("1~%d������ 2�Ǵ� 3�� ����� �� : %d\n",n, sum); // ��� ��µǴ� �� ���� �ʹٸ� ��ġ �̵�
		}

		// ����� �̵�
	}

	else {
		printf("�߸��� ���� �Է� \n");
	}




	return 0;
}