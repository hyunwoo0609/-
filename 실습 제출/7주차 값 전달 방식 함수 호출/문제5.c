
#include <stdio.h>
float calculate_F (float d);

int main(void) {
    float d;
    float f;
    
    printf("온도 입력 :");
    scanf("%f", &d);
    
    f = calculate_F(d);
    printf("화씨 온도 : %.2f\n", f);
}

float calculate_F(float d) {
    float f;
    f = ((float)9/5 * d + 32);
    return f;
}
