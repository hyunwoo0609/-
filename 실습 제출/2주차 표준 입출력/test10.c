//학번 및 이름 : 2024243099 장현우
//날짜 : 9/12
//내용 : 2주차 표준입출력 및 변수 실습 10번

#include <stdio.h>
int main(void) {
    //변수 선언
    double x;  //인치
    double y;  //센티미터
    
    //입력값(인치) 받기
    printf("inch = ");
    scanf("%lf", &x);
    
    //인치를 센티미터로 변환
    y = 2.54 * x;
    
    //결과
    printf("cm = %.2f\n", y);
    return 0;
}
