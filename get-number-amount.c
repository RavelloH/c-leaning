#include <stdio.h>

int countDigitOccurrences(long long int number, int digit) {
    int count = 0;
    while (number != 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    long long int number;
    int digit;
    printf("Enter an integer: ");
    scanf("%lld", &number);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    int result = countDigitOccurrences(number, digit);
    printf("The digit %d occurs %d times in the number %lld.\n", digit, result, number);

    return 0;
}