#include <stdio.h>

/*
    다음 조건에 맞도록 C언어의 프로토 타입을 구성하고 코드를 완성해보세요
    - void draw_line(int num);
    - num의 숫자만큼 '_' 출력하여 선 그리기
 */

void draw_line(int num){
    int i;
    for(i=1;i<=num;i++){
        print(“_”);
    }
}

int main(){
    int i;
    scanf(“%d”,&i);
    draw_line(i);
    return 0;
}

