#include <stdio.h>

int read_num(void);
int calculate_sum(int first, int second);

int main(void){
    int first, second, sum;
    first = read_num();
    second = read_num();
    sum = calculate_sum(first, second);
    
    printf("%d\n", sum);
}


int read_num(void){
    int num;
    printf("정수 입력 :");
    scanf("%d", &num);
    return num;
}

int calculate_sum(int first, int second){
    int s, b;
    int i;
    int sum = 0;
    if(first <= second){
        s = first;
        b = second;
    }
    else{
        s= second;
        b = first;
    }
    
    for(i = s; i<=b;i++){
        if(i % 2 ==0){
            sum = sum + i;
        }
    }
    return sum;
}
