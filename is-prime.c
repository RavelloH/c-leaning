// 判断一个数是不是素数

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