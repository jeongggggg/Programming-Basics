
#include <stdio.h> 

// a와 b에 대한 시프트 연산

int main(){
	int a = 10, b = 20;
	int an1, an2, an3, an4;

	an1 = a >> 3;
	an2 = b >> 2;
	an3 = a << 3;
	an4 = b << 2;

	printf("a=%d, b=%d\n", a, b);
	printf("a>>3=%d b>>2=%d a<<3=%d b<<2=%d\n", an1, an2, an3, an4);

	return 0;
}