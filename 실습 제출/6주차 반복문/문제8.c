// 10/12
// 2024243099 장현우
// 산술 연산자를 입력받아 수식과 답을 출력하는 프로그램

#include <stdio.h>

int main(void) {
    int x, y;
    char operator; // 산술 연산자

    while (1) { // 무한 루프
        // 값 입력받기
        printf("산술 연산자(+ - * / %%)와 두 개의 피연산자를 입력하세요 (q 입력 시 종료): ");
        
        // 연산자 입력받기
        scanf(" %c", &operator);

        // 프로그램 종료 조건
        if (operator == 'q') {
            break;
        }

        // 두 개의 피연산자 입력받기
        scanf("%d %d", &x, &y);

        // 연산자에 따라 계산
        if (operator == '+') {
            printf("%d + %d = %d\n", x, y, x + y);
        } else if (operator == '-') {
            printf("%d - %d = %d\n", x, y, x - y);
        } else if (operator == '*') {
            printf("%d x %d = %d\n", x, y, x * y);
        } else if (operator == '/') {
            if (y != 0) { // 0으로 나누기 방지
                printf("%d / %d = %d\n", x, y, x / y);
            } else {
                printf("0으로 나눌 수 없음\n");
            }
        } else if (operator == '%') {
            if (y != 0) {
                printf("%d %% %d = %d\n", x, y, x % y);
            } else {
                printf("0으로 나눌 수 없음\n");
            }
        } else {
            printf("잘못된 산술 연산자\n");
        }
    }

    printf("프로그램을 종료합니다.\n");
}



