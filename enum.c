#include <stdio.h>

// 枚举定义
enum {
    ONE=1,
    TWO,
    THREE,
    FOUR,
    FIVE
};

// 可指定一个初始值
enum {
    SIX=6,
    SEVEN,
    EIGHT,
    NINE,
    TEN
};

int main() {
    printf("%d %d %d %d %d\n", ONE, TWO, THREE, FOUR, FIVE);
    printf("%d %d %d %d %d\n", SIX, SEVEN, EIGHT, NINE, TEN);
    return 0;
}
