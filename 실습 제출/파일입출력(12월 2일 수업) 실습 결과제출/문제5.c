#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char name[15];
    char nation[4];
    char depart[3];
    int age;
    int sum = 0;
    int cnt = 0;
    int sum_KOR = 0, cnt_KOR = 0;
    int sum_USA = 0, cnt_USA = 0;
    int sum_CHI = 0, cnt_CHI = 0;
    int sum_JAP = 0, cnt_JAP = 0;
    int sum_CE = 0, cnt_CE = 0;
    int sum_IE = 0, cnt_IE = 0;
    int sum_AE = 0, cnt_AE = 0;
    int sum_EE = 0, cnt_EE = 0;

    FILE *fp;
    fp = fopen("/Users/hyunwooss/janghwWorkspace/student.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        exit(-1);
    }

    while (!feof(fp)) {
        fscanf(fp, "%s\t%d\t%s\t%s", name, &age, nation, depart);
        sum += age;
        cnt++;
        
        
        if (strcmp(nation, "KOR") == 0) {
            sum_KOR += age;
            cnt_KOR++;
        } else if (strcmp(nation, "USA") == 0) {
            sum_USA += age;
            cnt_USA++;
        } else if (strcmp(nation, "CHI") == 0) {
            sum_CHI += age;
            cnt_CHI++;
        } else if (strcmp(nation, "JAP") == 0) {
            sum_JAP += age;
            cnt_JAP++;
        }
        
        
        if (strcmp(depart, "CE") == 0) {
            sum_CE += age;
            cnt_CE++;
        } else if (strcmp(depart, "IE") == 0) {
            sum_IE += age;
            cnt_IE++;
        } else if (strcmp(depart, "AE") == 0) {
            sum_AE += age;
            cnt_AE++;
        } else if (strcmp(depart, "EE") == 0) {
            sum_EE += age;
            cnt_EE++;
        }
    }

    fclose(fp);
    
    if (cnt_KOR > 0) printf("KOR 평균 나이: %.2f\n", (float)sum_KOR / cnt_KOR);
    if (cnt_USA > 0) printf("USA 평균 나이: %.2f\n", (float)sum_USA / cnt_USA);
    if (cnt_CHI > 0) printf("CHI 평균 나이: %.2f\n", (float)sum_CHI / cnt_CHI);
    if (cnt_JAP > 0) printf("JAP 평균 나이: %.2f\n", (float)sum_JAP / cnt_JAP);
    
    
    if (cnt_CE > 0) printf("CE 평균 나이: %.2f\n", (float)sum_CE / cnt_CE);
    if (cnt_IE > 0) printf("IE 평균 나이: %.2f\n", (float)sum_IE / cnt_IE);
    if (cnt_AE > 0) printf("AE 평균 나이: %.2f\n", (float)sum_AE / cnt_AE);
    if (cnt_EE > 0) printf("EE 평균 나이: %.2f\n", (float)sum_EE / cnt_EE);
}
