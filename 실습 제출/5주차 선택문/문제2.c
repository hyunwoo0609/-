// 9/30
// 2024243099 장현우
// 양수 음수 구별

int main(void) {
    
    //변수설정
    int integer;
    
    //변수 입력 요청 후 저장
    printf("Enter integer :");
    scanf("%d", &integer);
    
    //양수 음수 구별을 위한 if문
    if (integer == 0) {
        printf("%d is zero\n", integer);
    }
    else if (integer > 0) {
        printf("%d is positive\n", integer);
    }
    else
        printf("%d is negative\n", integer);
}

