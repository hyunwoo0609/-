// 10/7
// 2024243099 장현우
// 약수 구하는 프로그램

#include <stdio.h>

int main(void) {
    int x, i;

    while (1) {
        printf("정수를 입력하세요(프로그램 종료는 0을 입력하시오): ");
        scanf("%d", &x);

        if (x == 0) {
            printf("프로그램 종료\n");
            break;
        }

        printf("%d의 약수: ", x);

        for (i = 1; i <= x; i++) {
            if (x % i == 0) {
                printf("%d\t", i);
            }
        }
        printf("\n");
    }
}
