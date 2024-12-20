// 이름 학번 : 장현우 2024243099
// 날짜 : 11/30
// 내용 : 이름을 입력 받고, 오름차순으로 정렬하는 프로그램

#include <stdio.h>
#include <string.h>

void Names(char names[][50], int nums);

int main(void) {
    int nums = 5;       // 학생 수
    char names[5][50];         // 이름 배열
    char x[50];             // 정렬에 사용할 변수
    int i = 0, j = 0;
    
    //이름 입력 함수 호출
    Names(names, nums);
    
    
    // 이름을 오름차순으로 정렬
    for (i = 0; i < nums - 1; i++) {
        for (j = i + 1; j < nums; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // strcmp 함수로 names[i]와 names[j]를 비교해서 오름차순으로 저장 될 수 있게 함
                strcpy(x, names[i]);  // names[i]를 변수 x에 저장
                strcpy(names[i], names[j]);   // names[j]를 names[i]로 자리 바꾸기
                strcpy(names[j], x);  // x를 names[j]로 자리 바꾸기
            }
        }
    }

    // 오름차순으로 정렬된 이름 출력
    for (int i = 0; i < nums; i++) {
        printf("%s\n", names[i]);
    }
}


// 이름을 입력받는 함수
void Names(char names[][50], int nums) {
    for (int i = 0; i < nums; i++) {
        printf("%d번 째 학생 이름 : ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }
}

