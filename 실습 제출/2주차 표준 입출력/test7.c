//학번 및 이름 : 2024243099 장현우
//날짜 : 9/14
//내용 : 2주차 표준입출력 및 변수 실습 7번

#include <stdio.h>
int main(void) {
    //변수선언
    char moonzza;
    char nextmoonzza;
    
    //문자 받기
    printf("Enter the value : ");
    scanf("%c", &moonzza);
    
    //그 다음 문자 구하기
    nextmoonzza = moonzza + 1;
    
    //값 출력하기
    printf("Next ASCII code : %c\n", nextmoonzza);
    return 0;
}
