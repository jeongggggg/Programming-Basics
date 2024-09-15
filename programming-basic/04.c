
#include <stdio.h>

// a와 b에 대한 비트 연산

int main(){
	int a = 10, b = 20;
	int an1, an2, an3, an4; an1 = a & b;

	an2 = a|b; 
	an3 = a ^ b;
	an4 = ~a;

	printf("a=%d, b=%d\n", a, b);
	printf("a&b=%d alb=%d a^b=%d ~a=%d\n", an1, an2, an3, an4);

	return 0;
}