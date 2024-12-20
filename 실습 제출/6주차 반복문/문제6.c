// 10/12
// 2024243099 장현우
// 구구단 출력


#include <stdio.h>

int main(void) {
    int a, b;
    int i, j;
    i=1;
    
    //수 입력받기
    printf("시작과 끝을 입력하시오: ");
    scanf("%d %d", &a, &b);
    
    //구구단 생성하기 위한 반복문
    while (i <= 9) {
        j=a;
        while (j <= b) {
            printf("%d x %d = %d\t", j, i, j * i);
            j++;
        }
        printf("\n");
        i++;
    }
}

