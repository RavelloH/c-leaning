// 计算pie值
#include <stdio.h>
#include <math.h>

int main() {
    double pie,eps;
    int i=1;
    printf("Input eps:");
    scanf("%lf",&eps);
    pie = 1.0;

    // 计算π值
    // 原理：π/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
    while (i<=eps) {
        pie += pow(-1,i)/(2.0*i+1.0);
        i++;
    }
    printf("%.24lf",pie*4);
    return 0;
}