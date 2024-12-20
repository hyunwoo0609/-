// 10/7
// 2024243099 장현우
// a부터 h까지 아스키 코드를 출력하는 프로그램

#include <stdio.h>
int main(void) {
    char x;
    
    for(x = 'a'; x <= 'h'; x++) {
        printf("%c : %d\n", x, x);
    }
}
