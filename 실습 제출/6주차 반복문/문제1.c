// 10/7
// 2024243099 장현우
// 100이하의 자연수 중 3의 배수를 for문으로 출력

#include <stdio.h>
int main(void) {
    int i, j;
    j = 0;
    for(i=1; i<=100; i++) {
        if(i % 3 == 0){
            printf("%d\t", i);
            j++;
        }
        if(j % 3 == 0) {
            printf("\n");
        }
    }
}
