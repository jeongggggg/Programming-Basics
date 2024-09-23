#include <stdio.h> 

// n�� �Է¹ް�, n���� ������ double �� �Է¹ް� �հ� ����� double�� ����ϴ� �ڵ带 �ϼ��غ�����.

int main() {
	int i, n;
	double score, sum = 0.0, avg;
	printf("n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("score of no.%d: ", i);
		scanf("%lf", &score);
		sum = sum + score;
	}

	avg = sum / (i - 1);

	printf("sum=%5.3lf, avg=%5.3lf\n", sum, avg);

	return 0;
}