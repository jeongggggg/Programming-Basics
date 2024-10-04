#include <stdio.h>
 
 /*
    다음과 같이 포인터 변수 ptr을 이용하여 배열 a의 값을 출력해보세요.
    - 포인터 변수 ptr은 1~10의 값을 연속하여 저장한 배열 a의 주소를 참조함
 */
int main(){
   int i;
   int *ptr;
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   ptr = a;

   for (i = 0; i < 10; i++){
    printf("a[%d] = %d \n", i, ptr[i]);
   }

    return 0;
}
