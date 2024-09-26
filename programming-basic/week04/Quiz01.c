#include <stdio.h> 
#include <math.h> 
#include <string.h> 

// 실행 결과를 설명

int main(){
    char name1[30] = "kim hycu"; 
    char name2[30] ="Lee univ";
    char name3[30] ="kim hycu"; 
    char name4[30] ="Lee univ";
    double t1 = 13.5, t2 = 13.33; //t1이 13.45 라면?
    int i = 10, j = 3;

    printf("strcmp(name1, name2) = %d, strcpy(name1, name2) = %s, strcat(name3,name4) = %s \n",strcmp(name1, name2), strcpy(name1, name2), strcat(name3,name4));
    printf("floor(t1)= %lf \n",floor(t1));
    printf("floor(t2) = %lf \n",floor(t2));
    printf("ceil(t1) = %lf \n",ceil(t1));
    printf("ceil(t2)= %lf \n",ceil(t2)); 

    return 0;
}

/*
    결과
    floor(t1)= 13.000000
    floor(t2) = 13.000000
    ceil(t1) = 14.000000
    ceil(t2)= 14.000000
*/