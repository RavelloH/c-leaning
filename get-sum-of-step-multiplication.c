// 求阶乘的和
#include <stdio.h>

// 求阶乘
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// 求1!+2!+3!+...+n!
long long sum_of_factorials(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    long long result = sum_of_factorials(n);
    printf("The sum of factorials from 1 to %d is: %lld\n", n, result);
    
    return 0;
}