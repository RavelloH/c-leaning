// 输出华氏度转摄氏度表

#include <stdio.h>

int main(void)
{
    double celsius;
    int lower, upper, step, fahr;

    printf("Lower : ");
    scanf("%d", &lower);
    printf("Upper : ");
    scanf("%d", &upper);
    step = 1;      // 步长

    if (lower > upper) {
        printf("Lower must be less than Upper.\n");
        return 1;
    }

    fahr = lower;
    printf("Fahr\tCels\n");
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32) / 9;
        printf("%4d\t%4.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}