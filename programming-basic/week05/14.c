#include <stdio.h>

int main(){
    int a[2][2] = {{11, 22}, {33, 44}};
    int i, sum = 0;
    int *p;

    p = a[0];

    for (i = 0; i < 4; i++){
        sum += *(p + i);
        printf("%d \n", *(p + i));
        printf("%d \n", sum);
    }

    printf("%d", sum);

    return 0;
    
}