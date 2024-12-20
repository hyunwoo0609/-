// 10/12
// 2024243099 장현우
// 첫번째 수와 두번째 수 사이의 모든 짝수의 합 구하기

#include <stdio.h>

int main(void) {
    int x, start, end, sum;
    
    // 두 개의 정수를 입력받기
    printf("첫 번째 정수 : ");
    scanf("%d", &start);
    printf("두 번째 정수(첫번째 정수보다 큰 수) : ");
    scanf("%d", &end);
    
    // 합 초기화
    sum = 0;
    
    // start부터 end까지 반복
    for (x = start; x <= end; x++) {
        if (x % 2 == 0) {
            sum += x;
        }
    }
    printf("두 수 사이의 모든 짝수 합 : %d\n", sum);
}

