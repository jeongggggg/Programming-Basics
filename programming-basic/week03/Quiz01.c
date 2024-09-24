#include <stdio.h>

// 배열을 이용하여 문자와 숫자를 출력하는 코드를 자유롭게 작성해 봅시다.

int main(){
    double tmp1[5] = {1};
    char tmp2[10] = {'h','y'};
    char tmp3[10] = "univ";
    int tmp4[] = {1,2,3,4,5};
    int i, size;

    size = sizeof(tmp4) / sizeof(tmp4[0]);

    for (i = 0; i < size; i++){
        printf("%d\t",tmp4[i]);
    }
    

    return 0;
}