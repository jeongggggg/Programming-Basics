#include <stdio.h>

// double인 F와 C선언
// 화씨온도 입력(F)
// 화씨온도 F를 섭씨온도 C로 변환(C = (F - 32) / 1.8)
// 단, 화씨온도가 32보다 클 경우만 계산하고 이외는 화씨온도 그대로 출력할 것

int main() {

	double f, c;
	scanf_s("%lf", &f); // IDE에 따른 차이로 scanf 또는 scanf_s 사용, devc++ 의 경우 scanf 도 사용 가능

	if(f > 32){
		c = (f - 32) / 1.8;
		printf("c=%lf\n", c);
	}
	else{
		printf("f=%lf\n", f);
	}

	return 0;
}