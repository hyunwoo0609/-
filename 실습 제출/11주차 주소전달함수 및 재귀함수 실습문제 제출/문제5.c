#include <stdio.h>

void printNum(int n); 

int main(void) {
    int num;
    
    while(1) {
        printf("정수 입력 : ");
        scanf("%d", &num);
        if(num == 0 || num < 0) {
            break;
        }
        else {
            printNum(num);
            printf("\n");
        }
    }
    printf("end\n");
}

void printNum(int n) {
    if(n==101) return;
    else {
        printf("%d\n", n);
        printNum(n+1);
    }
}
