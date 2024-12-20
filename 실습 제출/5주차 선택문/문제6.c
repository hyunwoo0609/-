// 10/5
// 2024243099 장현우
// 이자율 계산

#include <stdio.h>

int main(void) {
    
    //변수 설정
    double money;
    
    printf("예금액을 입력(원 단위) :");
    scanf("%lf", &money);
    
    //보기 편하게 만원 단위로 변경
    money = money / 10000;
    
    //이자율 산출을 위한 if문
    if(money < 100) {
        printf("이율은 2프로이고 이자액은 %.2lf원 입니다\n", money * 0.02);
    }
    else if(100 < money && money < 1000) {
        printf("이율은 3프로이고 이자액은 %.2lf원 입니다\n", money * 0.03);
    }
    else if(1000 < money && money < 5000) {
        printf("이율은 5프로이고 이자액은 %.2lf원 입니다\n", money * 0.05);
    }
    else
        printf("이율은 9프로이고 이자액은 %.2lf원 입니다\n", money * 0.09);
}
