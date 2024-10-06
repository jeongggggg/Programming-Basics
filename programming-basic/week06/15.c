#include <stdio.h>

// 구조체의 개념 및 활용 예제 3
struct data{
    int month;
    int day;
};

int main(){
    struct data test = {12, 25};
    struct data *ptr;
    ptr = &test;

    printf("month = %d, day = %d \n", test.month, test.day);
    printf("month = %d, day = %d \n", (*ptr).month, (*ptr).day);
    printf("month = %d, day = %d \n", ptr -> month, ptr -> day);

    return 0;
}
