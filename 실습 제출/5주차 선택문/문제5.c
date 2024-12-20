// 10/2
// 2024243099 장현우
// 소득세 계산

#include <stdio.h>
int main(void) {
    
    //변수 설정
    double money;
    
    printf("월급 (원 단위) : ");
    scanf("%lf", &money);
    
    //원 단위로 입력된 값을 보기 편하게 만원단위로 변환
    money = money / 10000;

    //소득세를 정하기 위한 if문
    if (money < 70) {
        printf("소득세가 없습니다\n");
    }
    else if (70 <= money && money < 150) {
        printf("소득세는 %.2lf만원 입니다\n", money * 0.03);
    }
    else if (150 <= money && money < 250) {
        printf("소득세는 %.2lf만원 입니다\n", money * 0.05);
    }
    else {
        printf("소득세는 %.2lf만원 입니다\n", money * 0.07);
    }
}
