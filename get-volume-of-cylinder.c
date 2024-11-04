// 函数题：求圆柱体积

#include <stdio.h>
#include <math.h>

// 函数声明
double volume(double r, double h);

// #define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706
const float PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706;

int main(void) {
    double r, h;
    printf("Input r:");
    scanf("%lf", &r);
    printf("Input h:");
    scanf("%lf", &h);
    printf("Volume = %f\n", volume(r, h));
    return 0;
}

double volume(double r, double h) {
    return PI * pow(r, 2) * h;
}