




#include <stdio.h>

int sum (int first, int second);

int main(void) {
    int x, y;
    int res;
    
    printf("두개의 정수 입력 :");
    scanf("%d %d", &x, &y);
    
    res = sum(x, y);
    printf("sum : %d\n", res);
}


int sum (int first, int second){
    int r;
    r = first + second;
    return r;
}
