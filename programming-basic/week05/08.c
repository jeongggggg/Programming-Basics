#include <stdio.h>

int main(){
    int a[5]={0};
    int *aptr;
    int i;

    printf("a의 주소= %d, %p, %u\n",a,a,a);

    aptr=a;

    printf("aptr의 내용= %d, %p, %u\n",aptr,aptr,aptr);
    
    return 0;
}
