#include <stdio.h>
 
 // 공용체
union user{
    int id;
    char a;
};

int main(){
    union user u1;
    u1.id = 1;
    u1.a = 'a';

    printf("id = %d, name = %d \n", u1.id, u1.a);

    return 0;
}
