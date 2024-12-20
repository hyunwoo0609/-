

#include <stdio.h>

void multiplication(int init, int end);

int main(void) {
    int x,y;
    printf("두 정수를 입력 :");
    scanf("%d %d", &x, &y);
    
    multiplication(x, y);
}

void multiplication(int init, int end){
    int a, b;
    int j, i = 1;
    
    if(init <= end){
        a = init;
        b = end;
    }
    else{
        a = end;
        b = init;
    }
    
    while (i <= 9) {
        j=a;
        while (j <= b) {
            printf("%d x %d = %d\t", j, i, j * i);
            j++;
        }
        printf("\n");
        i++;
        
    }
}
