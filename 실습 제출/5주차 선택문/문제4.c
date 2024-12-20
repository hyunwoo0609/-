// 9/25
// 2024243099 장현우
// 큰 수 찾기

#include <stdio.h>
int main(void) {
    //변수 설정
    int x,y,z ;
    int biggest;
    
    printf("enter three different num :");
    scanf("%d %d %d", &x, &y, &z);
    
    //가장 큰 수를 찾기 위한 if문
    if (x < z && y < z){
        biggest = z;
    }
    else if (y>x && y>z){
        biggest = y;
    }
    else biggest = x;
    
    printf("biggest num is %d\n", biggest);
}
