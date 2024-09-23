
#include <stdio.h> 

// 1을 True, 0을 Flase라 할 때, a=T, b=T에 대하여 논리 연산

int main(){
	int a = 1, b = 1;
	int an1, an2, an3;

	printf(" a=%d b=%dWnWn", a, b);

	an1 = a && b; 
	an2 = a || b;
	an3 = !a;

	printf(" a&&b=%d Wn a||B=%d n !a=%d\n", an1, an2, an3);
	return 0;
}