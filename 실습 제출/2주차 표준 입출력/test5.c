//학번 및 이름 : 2024243099 장현우
//날짜 : 9/14
//내용 : 2주차 표준입출력 및 변수 실습 5번

#include <stdio.h>

int main(void) {
    //변수 선언
    char character;
    
    //문자 입력
    printf("Enter the value: ");
    scanf("%c", &character);
    
    //문자에 해당하는 아스키코드 값 출력
    printf("ASCII :%d\n", (int)character);
    
    return 0;
}
