//학번 및 이름 : 2024243099 장현우
//날짜 : 9/11
//내용 : 2주차 표준입출력 및 변수 실습 3번

#include <stdio.h>

int main(void) {
    //변수 선언
    int num;
    
    //문장 출력
    printf("Enter a Decimal Number :");
    scanf("%d", &num);
    printf("Decimal : %d\n", num);
    printf("Octal : %o\n", num);
    printf("Hexa : %x\n", num);
    
    return 0;
}
