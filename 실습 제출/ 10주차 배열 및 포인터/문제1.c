#include <stdio.h>

int main(void) {
    int scores[10], i;
    float avg = 0.0;
    int sum = 0;
    int max;
    max = 0;
    printf("10명의 시험 점수를 입력하시오 : ");
    
    for(i=0;i<10;i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
        if(scores > max) max = scores[i];
    }
    avg = sum / 10;
    printf("%.2f\n", avg);
    printf("%d\n", max);
}
