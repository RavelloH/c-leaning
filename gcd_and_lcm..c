// 计算最大公约数和最小公倍数

#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("最大公约数：%d\n", gcd(a, b));
    printf("最小公倍数：%d\n", lcm(a, b));
    return 0;
}
