#include <stdio.h>

// 1~100���� ¦������ �� ���ϱ�
// for, while�� ��� ���
int main() {

	int sum = 0;
	int i = 1;
	
	// for�� ���
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}

	// while�� ���
	while (i <= 100) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++; // i = i + 1;
	}

	printf("1~100������ ¦���� �� : %d\n", sum);

	return 0;
}