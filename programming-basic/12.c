#include <stdio.h>

// 다음의 메뉴에 따라 프로그램 수행하기(정수 n 입력(1~3))
// n이 1 : 1~100까지 합
// n이 2 : 연도를 입력받고 윤년인지 아닌지 판단
// n이 3 : 1~n까지 숫자 중 2 또는 3의 배수의 합
// 조건문 : 다중 if문 사용하기
// 반복문 : for 사용하기

int main() {

	int n;
	int i, year, sum;
	
	printf("메뉴 : 1) 1~100까지 합 구하기 2) 윤년 구하기 3) 1~n까지의 2 또는 3의 배수 합 구하기 \n");
	scanf_s("%d", &n);

	if (n == 1) {
		sum = 0;
		for (i = 1; i <= 100; i++) {
			sum = sum + i;
		}

		printf("1~100까지의 합 : %d \n", sum);
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

			printf("1~%d까지의 2또는 3의 배수의 합 : %d\n",n, sum); // 계속 출력되는 걸 막고 싶다면 위치 이동
		}

		// 여기로 이동
	}

	else {
		printf("잘못된 숫자 입력 \n");
	}




	return 0;
}