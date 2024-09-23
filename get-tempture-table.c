// 输出华氏度转摄氏度表

#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

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
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d  %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}