#include <stdio.h>

typedef struct {
    int id;
    int hour;
    char med;
    int save;
    int work_time;
    int overtime;
    int total;
    int fin;
} EMPLOYEE;

int main(void) {
    int NUM_EMPLOYEES = 5;
    EMPLOYEE employees[NUM_EMPLOYEES];
    FILE *fp;
    int i;
    int base, overtime, total;
    int insurance, tax, final;

 
    fp = fopen("/Users/hyunwooss/janghwWorkspace/dt.txt", "r");

 
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        fscanf(fp, "%d %d %c %d %d %d",
               &employees[i].id, &employees[i].hour, &employees[i].med,
               &employees[i].save, &employees[i].work_time, &employees[i].overtime);
    }
    fclose(fp);


    for (i = 0; i < NUM_EMPLOYEES; i++) {
        
        base = employees[i].hour * employees[i].work_time;


        overtime = employees[i].hour * 1.3 * employees[i].overtime;

       
        total = base + overtime;

       
        if (employees[i].med == 'Y') {
            insurance = total * 0.001;
        } else {
            insurance = 0;
        }

        
        tax = total * 0.005;

       
        final = total - tax - insurance - employees[i].save;

        
        employees[i].total = total;
        employees[i].fin = final;

        
        printf("사원번호: %d, 최종 급여: %d\n", employees[i].id, employees[i].fin);
    }
}
