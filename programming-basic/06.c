#include <stdio.h>

// double�� F�� C����
// ȭ���µ� �Է�(F)
// ȭ���µ� F�� �����µ� C�� ��ȯ(C = (F - 32) / 1.8)
// ��, ȭ���µ��� 32���� Ŭ ��츸 ����ϰ� �ܴ̿� ȭ���µ� �״�� ����� ��

int main() {

	double f, c;
	scanf_s("%lf", &f); // IDE�� ���� ���̷� scanf �Ǵ� scanf_s ���, devc++ �� ��� scanf �� ��� ����

	if(f > 32){
		c = (f - 32) / 1.8;
		printf("c=%lf\n", c);
	}
	else{
		printf("f=%lf\n", f);
	}

	return 0;
}