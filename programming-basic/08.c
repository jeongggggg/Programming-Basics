#include <stdio.h>

// ���� ch �Է�
// ch�� ���Ͽ� �빮��, �ҹ���, ��Ÿ�� ���

int main() {
	
	char ch;
	printf("enter character: ");
	scanf_s("%c", &ch,1); // ���־� ��Ʃ����� ������ ũ�� �ۼ��� �ʿ���, �ٸ� IDE ������ scanf("%c", &ch); �� �ۼ� ����

	if (ch >= 'A' && ch <= 'Z') {
		printf("�빮��\n");
	}

	else if (ch >= 'a' && ch <= 'z') {
		printf("�ҹ���\n");
	}

	else {
		printf("��Ÿ\n");
	}

	return 0;
}