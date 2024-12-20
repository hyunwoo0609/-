// 10/7
// 2024243099 장현우
// 0부터 n사이의 홀수의 합 구하기

#include <stdio.h>
int main(void) {
    int x, y, sum;
    
    printf("enter integer :");
    scanf("%d", &y);
    
    x=0;
    sum = 0;
    
    
    for(x=0;x<=y;x++){
        if(x%2 == 1 && x!=1 && x!= y){
            sum += x;
        }
    }
    printf("sum : %d\n", sum);
}


