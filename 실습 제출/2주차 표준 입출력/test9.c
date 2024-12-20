//학번 및 이름 : 2024243099 장현우
//날짜 : 9/12
//내용 : 2주차 표준입출력 및 변수 실습 9번

#include <stdio.h>
int main(void) {
    //변수 선언
    int x;
    int y;
    
    printf("x =");
    scanf("%d", &x); //x값 받기
    
    //방정식 계산
    y = (x * x * x) + (20 * x * x) + (100 * x) - 5;

    //결과
    printf("y = %d\n", y);
    return 0;
}
