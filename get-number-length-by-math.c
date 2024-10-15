// 输入一个数，统计它的位数
#include <stdio.h>

int main(void) {
    long int number;
    int length = 1;

    printf("Type a number:");
    scanf("%li",&number);

    if (number < 0 ) {
        number = - number;
    }

    // 计算数字长度
    // 原理：不断除以10，直到小于10
    while (number > 9) {
        number = number / 10;
        length ++;
    }

    printf("Length:%i\n",length);
    return 0;
}