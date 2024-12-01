#include <stdio.h>

int sum_of_factors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void print_perfect_numbers(int m, int n) {
    for (int i = m; i <= n; i++) {
        if (i == sum_of_factors(i)) {
            printf("%d is a perfect number\n", i);
        }
    }
}

int main() {
    int m, n;
    printf("Enter the range (m and n): ");
    scanf("%d %d", &m, &n);

    if (m > 0 && n > m && n <= 100000) {
        print_perfect_numbers(m, n);
    } else {
        printf("Invalid input. Please ensure 0 < m < n <= 100000.\n");
    }

    return 0;
}