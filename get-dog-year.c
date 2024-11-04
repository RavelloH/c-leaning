// 已知2018为狗年，编写一个程序，输入一个世纪，输出这个世纪所有的狗年。

#include <stdio.h>

int main() {
    int century;
    scanf("%d", &century);
    int start_year = (century - 1) * 100 + 18;
    int end_year = century * 100;
    for (int i = start_year; i < end_year; i += 12) {
        printf("%d\n", i);
    }
    return 0;
}