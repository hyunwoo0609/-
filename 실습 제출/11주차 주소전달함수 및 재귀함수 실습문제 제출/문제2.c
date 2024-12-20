#include <stdio.h>

void finder(int *p_ary, int *p_max, int *p_min);

int main(void) {
    int min, max;
    int ary[5] = {20 ,40, 1, 100, 99};
    
    /*
     for(i=0;i<5;i++){
     printf("아무 정수 입력;
     scanf(%d, &ary[i])
    }
     */
    finder(ary, &max, &min);
    printf("Max : %d\tMin : %d\n", max, min);
}



void finder(int *p_ary, int *p_max, int *p_min) {
    int tmax = 0, tmin = 0, i;
    for(i=0; i<5; i++) {
        if(i==0){
            tmax = p_ary[i];
            tmin = p_ary[i];
        }
        else{
            if(p_ary[i]>tmax) tmax = p_ary[i];
            if(p_ary[i]<tmin) tmin = p_ary[i];
        }
    }
    *p_max = tmax;
    *p_min = tmin;
}
