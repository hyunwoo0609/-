


#include <stdio.h>

int calculate (char operator, int num1, int num2);

int main(void) {
    int n1, n2;
    char c;
    double res;
    res = 0;
    printf("산술연산자 입력 :");
    scanf("%c", &c);
    printf("피연산자 2개 입력 :");
    scanf("%d %d", &n1, &n2);
    
    res = calculate(c, n1, n2);
    printf("%d %c %d = %.2lf\n", n1, c, n2, res);
}


int calculate(char operator, int num1, int num2){
    double res;
    if(operator == '+'){
        res = num1 + num2;
    }
    else if(operator == '-'){
        res = num1 - num2;
    }
    else if(operator == '*'){
        res = num1 * num2;
    }
    else if(operator == '/'){
        res = num1 / num2;
    }
    else {
        res = num1 % num2;
    }
    return res;
}
