// 判断一个数是不是素数
// 素数：除了1和它本身，不能被其他数整除

#include <stdio.h>

int main(void)
{
    int number, temp;
    printf("Type a number:");
    scanf("%i", &number);

    if (number < 2)
    {
        printf("Number should >= 2");
        return 0;
    }

    // 从2开始，到number-1, 逐个判断是否能被整除
    // 如果能被整除，说明不是素数
    for (temp = 2; temp < number; temp++)
    {
        if (number % temp == 0)
        {
            printf("Not a prime");
            return 0;
        }
    }

    printf("Is a prime");
    return 0;
}