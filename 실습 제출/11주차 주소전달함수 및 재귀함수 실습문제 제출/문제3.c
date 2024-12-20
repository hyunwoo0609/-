#include <stdio.h>

float getAverage(int *Array, int count);

int main(void) {
    int Array[10];
    int cnt = 0;
    int val;

    while (cnt < 10) {
        printf("정수 입력(최대 10번, 0입력 시 종료 : ");
        scanf("%d", &val);

        if (val == 0) {
            break;
        }

        if (val < 1) {
            printf("1 이상의 정수 입력\n");
            continue;
        }

        Array[cnt++] = val;
    }

    if (cnt == 0) {
        printf("입력된 정수 없음\n");
    } else {
        float average = getAverage(Array, cnt);
        printf("평균값: %.2f\n", average);
    }
}

float getAverage(int *Array, int cnt) {
    float sum = 0;

    for (int i = 0; i < cnt; i++) {
        sum += Array[i];
    }

    return sum / cnt;
}
