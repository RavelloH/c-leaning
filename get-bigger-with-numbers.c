// 输入10个整数，输出最大的数及其下标

#include <stdio.h>

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    int max = numbers[0], index = 0;
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            index = i;
        }
    }
    printf("max = %d, index = %d\n", max, index);
    return 0;
}