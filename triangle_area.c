#include <stdio.h>

float sqrt(float x)
{
    float xhalf = 0.5f * x;
    int i = *(int *)&x;
    i = 0x5f3759df - (i >> 1);
    x = *(float *)&i;
    x = x * (1.5f - xhalf * x * x);
    return 1 / x;
}
float triangle_area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%f", triangle_area(a, b, c));
    return 0;
}
