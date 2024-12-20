// 10/5
// 2024243099 장현우
// if문을 이용하여 수식과 답 출력하기

#include <stdio.h>
int main(void) {
    //변수 설정
    char operator;
    int num1, num2, result;
    
    printf("산술 연산자(+ - * / %%) 중 하나를 입력하세요 :");
    scanf("%c", &operator);
    getchar(); //버퍼에 남은 \n 제거
    
    printf("피연산자(정수)를 두개 입력하세요 :");
    scanf("%d %d", &num1, &num2);
    
    //if문으로 연산자에 따른 계산 수행
    if (operator == '+') {
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("%d x %d = %d\n", num1, num2, result);
    }
    else if (operator == '/') {
        result = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, result);
    }
    else if (operator == '%') {
        result = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, result);
    }
    else
        printf("값을 다시 입력하시오\n");
}
