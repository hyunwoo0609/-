
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[15];
    int age;
    char nation[4];
    char depart[3];
} Student;

int main(void) {
    FILE *fp;
    Student student;
    char input_name[15];

    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/student.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        exit(-1);
    }

    
    printf("학생 이름 입력 : ");
    scanf("%s", input_name);

    while (fscanf(fp, "%s %d %s %s", student.name, &student.age, student.nation, student.depart) != EOF) {
        if (strcmp(student.name, input_name) == 0) {
            printf("학생 이름 : %s\n", student.name);
            printf("학과 : %s\n", student.depart);
            printf("국적 : %s\n", student.nation);
            fclose(fp);
            return 0;
        }
    }

    
    printf("해당 학생 없음\n");

    fclose(fp);
}
