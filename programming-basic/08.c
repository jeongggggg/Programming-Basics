#include <stdio.h>

// 문자 ch 입력
// ch에 대하여 대문자, 소문자, 기타를 출력

int main() {
	
	char ch;
	printf("enter character: ");
	scanf_s("%c", &ch,1); // 비주얼 스튜디오는 문자의 크기 작성이 필요함, 다른 IDE 에서는 scanf("%c", &ch); 로 작성 가능

	if (ch >= 'A' && ch <= 'Z') {
		printf("대문자\n");
	}

	else if (ch >= 'a' && ch <= 'z') {
		printf("소문자\n");
	}

	else {
		printf("기타\n");
	}

	return 0;
}