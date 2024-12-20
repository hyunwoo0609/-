#include <stdio.h>

void printStar(int n); //별 하나 출력하는 재귀 함수

int main(void) {
    int num;
    
    while(1) {
        printf(" 몇 개의 별을 출력할 것인가 : ");
        scanf("%d", &num);
        if(num == 0 || num < 0) {
            break;
        }
        else {
            printStar(num);
            printf("\n");
        }
    }
    printf("end\n");
}

void printStar(int n) {
    if(n==0) return;
    else {
        printf("*");
        printStar(n-1);
    }
}
