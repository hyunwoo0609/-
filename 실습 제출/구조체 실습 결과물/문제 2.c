#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20];
    int eng;
    int math;
    int total;
    int num;
}STUDENT;



int main(void) {
    STUDENT students[10];
    STUDENT temp;
    FILE *fp;
    int i=0,j=0;
    
    fp = fopen("/Users/hyunwooss/janghwWorkspace/students.txt", "r");
    
    for(i=0;i<10;i++) {
        fscanf(fp, "%s\t%d\t%d", students[i].name, &students[i].eng, &students[i].math);
        
        students[i].total = students[i].eng + students[i].math;
        
        printf("%s\t%d\t%d\n", students[i].name, students[i].eng, students[i].math);
    }
    printf("\n======After sorting======\n");
    
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(strcmp(students[i].name, students[j].name)>0){
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i].eng, students[i].math);
    }
    
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (students[i].total < students[j].total) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
            
                students[i].num = i + 1;
            }
        }
    

        
        printf("\n======After sorting======\n");
        for (i = 0; i < 10; i++) {
            printf("%d. %s\t%d\t%d\t%d\n", students[i].num, students[i].name, students[i].eng, students[i].math, students[i].total);
        }
    
}
