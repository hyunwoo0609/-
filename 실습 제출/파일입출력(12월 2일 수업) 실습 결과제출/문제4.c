#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fp;
    int linenum = 0;
    char save[100];
    char lines[100][100];
    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/Datafile.txt", "r");
    if (fp == NULL) {
        printf("원본 파일 열기 실패\n");
        exit(-1);
    } else {
        printf("원본 파일 열기 성공\n");
    }

    
    while (!feof(fp)){
        fgets(save, sizeof(save), fp);
        strcpy(lines[linenum], save);
        linenum++;
    }
    
    
    printf("역순 출력 : \n");
    for (int i = linenum - 1; i >= 0; i--) {
        printf("%d 번째 줄 (역순) : %s", i + 1, lines[i]);
    }

    fclose(fp);
}
