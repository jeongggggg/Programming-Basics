#include <stdio.h>

/*
    ������ ���ǿ� ���� �ڵ带 �ۼ��غ�����
    - ������ ����ü user�� ���� �迭 ���� : test[3]
    - ����ü ��� : ������ ���� id, ũ�� 30�� ���ڿ� name
    - ����� �����Է� �� ���(�ּ� 3�� �̻�)
*/

struct user{
    int id;
    char name[30];
};

int main(){
    struct user test[3];
    int i;

    for (i = 0; i < 3; i++){
        scanf("%d", &test[i].id);
        scanf("%s", &test[i].name);
    }

    for (i = 0; i < 3; i++){
        printf("\n %d \t %s \n", test[i].id, test[i].name);
    }
}