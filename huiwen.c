#include <stdio.h>
#include <string.h>

int minSwapsToPalindrome(char str[]) {
    int n = strlen(str);
    int swaps = 0;

    for (int i = 0; i < n / 2; i++) {
        int left = i;
        int right = n - left - 1;

        while (left < right) {
            if (str[left] == str[right]) {
                break;
            } else {
                right--;
            }
        }

        if (left == right) {
            return -1;
        }

        for (int j = right; j < n - left - 1; j++) {
            char temp = str[j];
            str[j] = str[j + 1];
            str[j + 1] = temp;
            swaps++;
        }
    }

    return swaps;
}

int main() {
    char str[] = "mamad";
    int result = minSwapsToPalindrome(str);

    if (result == -1) {
        printf("Not possible to form a palindrome\n");
    } else {
        printf("Minimum swaps required: %d\n", result);
    }

    return 0;
}