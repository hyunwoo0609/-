//이름 학번 : 장현우 2024243099
//날짜 : 10/27
//내용 : 8에서 15사이의 10진수를 2진수로 변환하는 코드


#include <stdio.h>

int main(void) {
    int num, x, y; // num은 8에서 15 사이의 정수, x는 몫, y는 나머지
    int a1 = 0, a2 = 0, a3 = 0, a4; // a1,2,3은 나머지를 저장하기 위해 a4는 마지막에 남은 몫을 저장하기 위한 변수
    int count = 0; // 적절한 나머지 값을 저장하기 위한 변수

    printf("8에서 15 사이의 정수 입력: ");
    scanf("%d", &num);

    // 입력값 확인 8에서 15사이의 정수인지 아닌지
    if (num >= 8 && num <= 15) {
        // 2진수 변환
        while (num > 1) {
            x = num / 2; // 몫 계산
            y = num % 2; // 나머지 계산

            // 나머지를 저장
            if (count == 0) {
                a1 = y;
            } else if (count == 1) {
                a2 = y;
            } else if (count == 2) {
                a3 = y;
            }
            count++; // 나머지를 저장할 순서를 증가

            num = x; // 2를 나누고 나온 몫을 새로운 num값으로 저장
        }
        a4 = num; // 마지막 남은 몫 저장

        // a4부터 a1까지 역으로 출력
        printf("%d%d%d%d\n", a4, a3, a2, a1);
    } else {
        printf("오류 : 8에서 15사이의 정수 입력\n");
    }
}
