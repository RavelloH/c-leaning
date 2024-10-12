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

    while (number > 9) {
        number = number / 10;
        length ++;
    }

    printf("Length:%i\n",length);
    return 0;
}