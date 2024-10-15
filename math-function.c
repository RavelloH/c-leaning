// 分段函数计算
// 输入一个浮点数x，计算y=f(x)，其中f(x)为如下分段函数：
// 
// 当x < -1时，y = x^3 - 1
// 当-1 <= x <= 1时，y = -3x + 1
// 当1 < x <= 10时，y = 3 * e^(2x - 1) + 5
// 当x > 10时，y = 5x + 3 * log10(2x^2 - 1) - 13
// 其中e为自然对数的底，取2.717。

#include <stdio.h>
#include <math.h>

const float e = 2.717;

float function(float x)
{
    if (x < -1)
    {
        return pow(x, 3) - 1.0;
    }
    if (x >= -1 && x <= 1)
    {
        return -3 * x + 1.0;
    }
    if (x > 1 && x <= 10)
    {
        float temp = 2 * x - 1;
        return 3 * pow(e, temp) + 5.0;
    }
    if (x > 10)
    {
        return 5.0 * x + 3 * log10(2 * x * x - 1) - 13;
    }
    return 0;
}

int main()
{
    float input;
    scanf("%f", &input);
    printf("%f", function(input));
    return 0;
}
