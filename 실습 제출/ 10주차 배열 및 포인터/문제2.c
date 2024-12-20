#include <stdio.h>

int main(void) {
    int scores[2][5];
    int esum=0, msum=0, i;
    float avg;
    
    printf("영어 성적을 입력하세요\n");
    for(i=0;i<5;i++){
        printf("학생 %d의 영어 성적 : ", i+1);
        scanf("%d", &scores[0][i]);
        esum = esum + scores[0][i];
    }
    
    printf("수학 성적을 입력하세요\n");
    for(i=0;i<5;i++){
        printf("학생 %d의 영어 성적 : ", i+1);
        scanf("%d", &scores[1][i]);
        msum = msum + scores[1][i];
    }
    printf("=====================");
    printf("영어 평균 : %.2f\n", (float)esum /(sizeof(scores[0])/sizeof(scores[0][0])));
    printf("수학 평균 : %.2f\n", (float)esum /(sizeof(scores[1])/sizeof(scores[1][0])));
    
    printf("=====================");
    
    for(i=0; i<5; i++) {
        printf("학생 %d의 평균 : ", i+1);
        printf(".2f\n", (float)(scores[0][i]+scores[1][i])/2);
    }
}x
