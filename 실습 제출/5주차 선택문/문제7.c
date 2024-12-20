// 9/25
// 2024243099 장현우
// bmi 계산

#include <stdio.h>
int main(void) {
    //변수 설정
    float height, kg;
    float bmi;
    
    printf("키를 입력하세요(단위 cm) :");
    scanf("%f", &height);
    
    printf("몸무게를 입력하세요(단위 kg) :");
    scanf("%f", &kg);
    
    //bmi 계산
    bmi = kg / ((height / 100) * (height / 100));
    
    //구간 별 비만도 측정을 위한 if문
    if (bmi < 18.5) {
        printf("bmi는 %.1f이고 저체중입니다\n", bmi);
    }
    else if (bmi >= 18.5 && bmi < 25) {
        printf("bmi는 %.1f이고 정상체중입니다\n", bmi);
    }
    else if (bmi <= 25.0 && bmi < 30) {
        printf("bmi는 %.1f이고 과체중입니다\n", bmi);
    }
    else
        printf("bmi는 %.1f이고 비만입니다\n", bmi);
    
}

