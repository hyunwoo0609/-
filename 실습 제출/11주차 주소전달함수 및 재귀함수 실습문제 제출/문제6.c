#include <stdio.h>

long power(int a, int b);

int main(void) {
    int a = 0,b = 0;
    printf("정수 a 입력 : ");
    scanf("%d", &a);
    printf("정수 b 입력 : ");
    scanf("%d", &b);
    
    long result = power(a, b);
    printf("%d의 %d승은 %ld\n", a, b, result);
}


long power(int a, int b) {
    if (b == 0) {
            return 1;
        } else {
            return a * power(a, b - 1);
        }
}
