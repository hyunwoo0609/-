// 9/25
// 2024243099 장현우
// 홀짝 분별기

#include <stdio.h>
int main(void) {
    // 변수 설정
    int num;
    int res;
    
    //변수 입력 요청 후 저장
    printf("enter integer :");
    scanf("%d", &num);
    
    res = num%2;
    
    //홀짝 구별을 위한 if문
    if (num == 0){
        printf("%d is zero\n", num);
    }
    else if (res == 0) {
        printf("%d is even num\n", num);
    }
    else if (res == 1) {
        printf("%d is odd num\n", num);
    }
    else printf("정수를 입력하세요\n");
    
}

