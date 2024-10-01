#include <stdio.h>

// 다음의 코드를 작성하고 결과를 출력해보세요

int main(){
    int a[5]={0};
    int *aptr;
    int i;

    printf("a의 주소= %d, %p, %u\n",a,a,a);

    aptr=a;

    printf("aptr의 내용= %d, %p, %u\n",aptr,aptr,aptr);
    
    return 0;
}
