#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char name[15];
    char nation[4];
    char depart[3];
    int age;
    char grade[5];
    FILE *fp, *fp_new;

    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/student.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        exit(-1);
    }

    
    fp_new = fopen("/Users/hyunwooss/janghwWorkspace/student_new.txt", "w");
    if (fp_new == NULL) {
        printf("새로운 파일 열기 실패\n");
        fclose(fp);
        exit(-1);
    }

    
    while (fscanf(fp, "%s\t%d\t%s\t%s", name, &age, nation, depart) != EOF) {
        
        printf("학생 이름 : %s\n", name);
        
        
        printf("학생 %s의 성적 입력 : ", name);
        scanf("%s", grade);
        
       
        fprintf(fp_new, "%s\t%s\t%s\t%s\n", name, grade, depart, nation);
    }

    fclose(fp);
    fclose(fp_new);
    
    printf("새로운 파일 student_new.txt가 생성됨\n");
}
