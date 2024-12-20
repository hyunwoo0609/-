//학번 및 이름 : 2024243099 장현우
//날짜 : 9/12
//내용 : 2주차 표준입출력 및 변수 실습 8번

#include <stdio.h>
int main(void) {
    // 변수 선언
    int x; //한 변의 길이
    int y; // 면적
    
    //x 값 받기
    printf("x = ");
    scanf("%d", &x);
    
    //면적 계삭
    y = (x * x);
    
    //출력
    printf("y = %d\n", y);
    return 0;
}
