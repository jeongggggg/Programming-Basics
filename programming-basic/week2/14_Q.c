#include <stdio.h> 

// n을 입력받고, n명의 성적을 double 로 입력받고 합과 평균을 double로 출력하는 코드를 완성해보세요.

int main() {
	int i, n;
	double score, sum = 0.0, avg;
	printf("n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("score of no.%d: ", i);
		scanf_s("%lf", &score);
		sum = sum + score;
	}

	avg = sum / (i - 1);

	printf("sum=%5.3lf, avg=%5.3lf\n", sum, avg);

	return 0;
}