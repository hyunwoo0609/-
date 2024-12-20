#include <stdio.h>

int main(void) {
    char val[100];
    int length = 0;

    printf("문장 입력: ");
    fgets(val, sizeof(val), stdin);  //xcode는 get함수를 쓸 수 없음

    
    while (val[length] != '\0' && val[length] != '\n') {
        length++;
    }

    
    printf("길이 : %d\n", length);
}
