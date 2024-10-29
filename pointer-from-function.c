// 从函数返回指针
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

/* 生成并返回随机数的函数 */
int * getRandom() {
    static int r[10];
    int i;

    /* 设置随机数种子 */
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }

    return r;
}

/* 主函数，调用 getRandom 函数 */
int main() {
    /* 一个指向整数的指针 */
    int *p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++) {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }

    return 0;
}