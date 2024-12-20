//학번 및 이름 : 2024243099 장현우
//날짜 : 9/14
//내용 : 2주차 표준입출력 및 변수 실습 6번

#include <stdio.h>
int main(void) {
    //변수선언
    char uppercase;
    char lowercase;
    
    
    //대문자 입력
    printf("Enter the uppercase :");
    scanf("%c", &uppercase);
    
    //소문자 값 구하기
    //아스키 코드에서 대문자와 소문자 값의 차이는 항상 32
    lowercase = uppercase + 32;
    
    //소문자 출력
    printf("lowercase : %d\n", lowercase);
    
    return 0;
    
    
    
}
