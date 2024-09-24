#include <stdio.h>
#define I 2
#define J 3

int main(){
    int test[I][J] = {0};
    int i, j;

    for (i = 0; i < I; i++){
        for (j = 0; j < J; j++){
            printf("test[%d][%d] = %d\n", i, j, test[i][j]);
        }
    }
}