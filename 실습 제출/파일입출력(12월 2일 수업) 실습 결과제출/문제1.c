#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fp;
    int linenum = 1;
    char save[100];
    int cnt = 0, i = 0;
    
    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/Datafile.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        exit(-1);
    }
    else {
        printf("열기 성공\n");
    }
    
    while (!feof(fp)){
        fgets(save, sizeof(save), fp);
        for(i=0; i<100; i++){
            if(save[i] == '\0') break;
            if(save[i] == 'a'){
                cnt++;
            }
        }
        printf("%d th Line : %d\n", linenum, cnt);
        cnt = 0;
        linenum++;
    }
    
}

