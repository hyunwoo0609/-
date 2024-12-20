//이름 학번 : 장현우 2024243099
//날짜 : 11/11
//내용 : 난수 생성과 2차원 배열을 활용하여 평균을 산출하는 프로그램




#include <stdio.h>
#include <stdlib.h> //srand()함수를 사용하기 위해 stdlib.h 헤더파일을 포함
#include <time.h>   //time 함수를 사용하기 위해 time.h 헤더파일을 포함

int main(void) {
    int scores[4][20];       // 각 학년별 학생 점수를 2차원 배열로 표현
    int i, j;                // 반복문 제어 변수
    float avg[4] = {0};      // 학년별 평균
    float all_avg = 0;     // 전체 학년 평균
    float sum = 0;     // 학년별 총점
    
    // 시드 초기화 : 매번 다른 난수 생성
    srand((unsigned int)time(NULL));

    // 성적 생성 및 학년별 평균 계산
    for (i = 0; i < 4; i++) {   //4학년까지 이므로 i<4
        sum = 0;       //grade_sum을 0으로 초기화 하지 않으면 직전 학년에서 계산한 값이 그대로 다음 학년에 포함됨
        for (j = 0; j < 20; j++) {  // 학년마다 20명이므로 j<20
            scores[i][j] = rand() % 101;  // 0~100 범위의 난수 생성
            sum += scores[i][j];    // 총점 더하기
        }
        avg[i] = sum / 20;   // 학년별 평균 계산
        all_avg += sum;          // 전체 총점 더하기
    }

    // 전체 평균 계산
    all_avg = all_avg / 80;  // 총점을 전체 학생 수(전체 학생 수는 4 * 20 = 80)로 나눔

    // 결과 출력
    for (i = 0; i < 4; i++) {
        printf("%d학년 평균: %.2f\n", i + 1, avg[i]);
    }

    printf("전체 학생 평균: %.2f\n", all_avg);
}
