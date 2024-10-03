#include <stdio.h>

int main(){
    int *ptr;
    int i=10;
    ptr=&i;
    printf("i의 주소= %d, ptr의 값=%d\n",&i,ptr);
    printf("i의 값=%d, *ptr의 값=%d\n",i,*ptr);
    return 0;
}
