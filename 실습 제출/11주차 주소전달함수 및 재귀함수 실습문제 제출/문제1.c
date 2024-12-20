#include <stdio.h>

void circumference(int radius, double *circle);

int main(void) {
    int radius;
    double circle;
    
    printf("반지름 : ");
    scanf("%d", &radius);
    
   
    circumference(radius, &circle);
    
    
    printf("원의 둘레: %.2lf\n", circle);
}

void circumference(int radius, double *circle) {
    *circle = radius * 2 * 3.14;
}
