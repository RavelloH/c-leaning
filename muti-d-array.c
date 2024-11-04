#include <stdio.h>

int main() {
    // 二维数组的初始化
    double array[3][4] = {
        {1.1, 1.2, 1.3, 1.4},
        {2.1, 2.2, 2.3, 2.4},
        {3.1, 3.2, 3.3, 3.4}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%f ", array[i][j]);
        }
        printf("\n");
    }
}