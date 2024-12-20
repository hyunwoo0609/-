#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fp, *fp_copy;
    int linenum = 1;
    char save[100];
    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/Datafile.txt", "r");
    if (fp == NULL) {
        printf("원본 파일 열기 실패\n");
        exit(-1);
    } else {
        printf("원본 파일 열기 성공\n");
    }

    
    fp_copy = fopen("/Users/hyunwooss/janghwWorkspace/copied.txt", "w");
    if (fp_copy == NULL) {
        printf("복사본 파일 열기 실패\n");
        fclose(fp);
        exit(-1);
    } else {
        printf("복사본 파일 열기 성공\n");
    }
    
    
    while (!feof(fp)) {
        if (fgets(save, sizeof(save), fp) != NULL) {
            fputs(save, fp_copy);
            linenum++;
        }
    }
    
    fclose(fp);
    fclose(fp_copy);

    printf("파일 복사 완료. 복사본 파일 : copied.txt\n");
    
}
