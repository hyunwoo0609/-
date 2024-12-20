//학번 및 이름 : 2024243099 장현우
//날짜 : 9/14
//내용 : 2주차 표준입출력 및 변수 실습 4번

#include <stdio.h>
int main(void) {
    //변수 선언
    int decimal;
    char character;
    
    //35이상 125이하의 10진수 입력
    printf("Enter a decimal number between 35 and 125 : ");
    scanf("%d", &decimal);
    
    // if else로 입력받은 값 확인 (if else문 구조는 코딩 도장의 블로그 참조)
    if (35<= decimal && decimal <= 125) {
        character = (char)decimal; //10진수를 문자로 변환, 형변환은 gpt한테 물어봄
        printf("%c\n", character); //변환한 값을 출력
    } else {
        printf("Error, please enter the value again\n");
    }
    return  0;
}

