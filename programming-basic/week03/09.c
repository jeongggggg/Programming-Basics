#include <stdio.h>

/*
    ������ ������ �ذ��ϴ� �ڵ带 �ۼ��غ�����.

    - score : �л��� A���� ������ ��Ÿ���� double�� �迭
    - �ִ� 10���� ������ ���� ������
    - 10���� �л��� ������ �Է� �ް� �ش� ���� ������ ��� ���ϱ�
    - ����(double) : sum, avg, I, j ���
 */
int main(){
    double score[10] = {0}; // 0���� �Է��ص� double ������ �ν���
    double sum = 0.0, avg;
    int i, j;

    for (i = 0; i < 10; i++){
        scanf("%lf", &score[i]); // ��ȯ ���ڿ�, lf(long float) -> �߸� ������ ����
        sum = sum + score[i];
    }
    
    avg = sum / i;

    printf("A����, %d�� ������ ��� : %lf \n", i, avg);

    return 0;
}