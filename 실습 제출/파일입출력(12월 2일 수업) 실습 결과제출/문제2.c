#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fp;
    int linenum = 1;
    char save[100];
    
    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/Datafile.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        exit(-1);
    }
    else {
        printf("열기 성공\n");
    }
    
    while (!feof(fp)) {
        if (fgets(save, sizeof(save), fp) != NULL) {
            printf("%d 번째 줄: ", linenum);
            puts(save);
            linenum++;
        }
    }
    
    fclose(fp);
}


