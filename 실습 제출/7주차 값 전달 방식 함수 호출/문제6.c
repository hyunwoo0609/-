

#include <stdio.h>
float rec(float x);
float cir(float r);
float tri(float s, float h);

int main(void) {
    char p;
    float res;
    float x, r, s, h;
    printf("R(정사각형), C(원),T(삼각형)중 하나 입력:");
    scanf("%c", &p);
    
    switch (p) {
        case 'R':
            printf("한 변의 길이 :");
            scanf("%f", &x);
            res = rec(x);
            printf("%.2f\n", res);
            break;
        case 'C':
            printf("반지름 :");
            scanf("%f", &r);
            res = cir(r);
            printf("%.2f\n", res);
            break;
        case 'T':
            printf("밑변 :");
            scanf("%f", &s);
            printf("높이 :");
            scanf("%f", &h);
            res = tri(s, h);
            printf("%.2f\n", res);
            break;
        default:
            printf("잘못된 입력\n");
            break;
    }
}

float rec(float x) {
    float res;
    res = x * x;
    return res;
}

float cir(float r) {
    float res;
    res = 3.14 * r * r;
    return res;
}

float tri(float s, float h) {
    float res;
    res = (s * h)/2;
    return res;
}
