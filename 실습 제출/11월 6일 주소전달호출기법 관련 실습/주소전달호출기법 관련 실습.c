//2024243099 장현우


//함수 선언 : 반지름을 입력받아 둘레를 계산 한 후 circle이 가리키는 주소로 날라가 값을 저장
void circumference (int radius, double *circle);

#include <stdio.h>
int main(void) {
    int radius; //반지름
    double circle;  //원의 둘레를 저장할 변수
    
    printf("반지름 r을 입력 : ");  //반지름을 입력받는 코드
    scanf("%d", &radius);
    
    circumference(radius, &circle);  //circumference 함수 호출 : 입력받은 반지름을 이용해 함수 내에서 반지름을 계산하고 circle이 가리키는 주소로 날라가 값을 저장
    printf("둘레 : %.2f\n", circle);  // 출력
}

void circumference (int radius, double *circle) {
    *circle = 3.14 * 2 * radius;  //입력받은 반지름을 이용해 계산을 한 후 circle이 가리키는 주소로 날라가 값을 저장
}
