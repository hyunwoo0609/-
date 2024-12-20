// 10/7
// 2024243099 장현우
// 평균 구하기

#include <stdio.h>
int main(void) {
    int x;
    int sum = 0;
    int cnt = 0;
    double avg;
    
    while(1){
        printf("수를 입력하시오 : ");
        scanf("%d", &x);
        if(x !=0) {
            sum += x;
            cnt ++;
        }
        else
            break;
    }
    if(cnt==0){
        printf("프로그램 종료\n");
    }else
    avg = 0;
    avg = (double)sum/cnt;
    printf("평균은 %.2lf입니다\n", avg);
}
