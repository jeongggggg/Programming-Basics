#include <stdio.h>
 
 /*
    1 ~10 까지의 값을 연속적으로 저장한 배열 a를 선언하고, a의 값을 출력해보세요.
 */
int main(){
   int i;
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   for (i = 0; i < 10; i++){
    printf("a[%d] = %d \n", i, a[i]);
   }

    return 0;
}
