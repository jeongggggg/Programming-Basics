#include <stdio.h>

// ������ score �Է�
// score�� 2�� ����� ��� 'two' �Է�
// score�� 2�� ����� �ƴϸ鼭, 3�� ����� ��� 'three' ���
// �ܴ̿� 'etc' ���

int main() {
	int score;

	printf("score : ");
	scanf_s("%d", &score);

	if (score % 2 == 0) {
		printf("two\n");
	}

	else if (score % 3 == 0) {
		printf("three\n");
	}

	else {
		printf("etc\n");
	}

	return 0;
}