#include <stdio.h>

/*
    다음의 구조체 info에 대하여 구조체 변수 test2를 배열로 선언하여 3명의 데이터를 저장해보세요.
    - date : 날짜 관련 구조체
    - user : 고객정보 관련 구조체
    - student : 학생정보 관련 구조체
    - data
        - 1, kim, 4.32
        ‒ 2, lee, 4.01
        ‒ 3, jung, 4.5
*/

struct info test2[3] = {
    { 1, "kim", 4.32 },
    { 2, "lee", 4.01},
    { 3, "jung", 4.5 }
};