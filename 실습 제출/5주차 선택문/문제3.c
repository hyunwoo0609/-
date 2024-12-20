// 9/30
// 2024243099 장현우
// 두 수 비교 후 차 구하기

#include <stdio.h>
int main(void) {
    
    //변수 설정
    int a, b;
    int big, samll;
    
    printf("Enter two num :");
    scanf("%d %d", &a, &b);
    
    // 두 수를 비교하기 위한 if문
    if (a < b) {
        big = b;
        samll = a;
        printf("difference is %d\n", big - samll);
    }
    else if (a > b){
        big = a;
        samll = b;
        printf("difference is %d\n", big - samll);
    }
    else
        printf("difference is zero\n");
}
