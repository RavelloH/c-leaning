// 华氏度转摄氏度

#include <stdio.h>
int main(void) {
    float fahrenheit, celsius;
    printf("Fahrenheit : ");
    scanf("%f", &fahrenheit);

    // 转换公式: (华氏度 - 32) * 5 / 9 = 摄氏度
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius : %.2f\n", celsius);
}