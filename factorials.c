#include <stdio.h>

#define MAX_DIGITS 200 // Maximum number of digits in result

void multiply(int result[], int n) {
    int carry = 0, i;
    for (i = 0; i < MAX_DIGITS; i++) {
        int digit = result[i] * n + carry;
        result[i] = digit % 10;
        carry = digit / 10;
    }
}

int findRightmostNonZeroDigit(int n) {
    int result[MAX_DIGITS] = {0};
    result[0] = 1; // Initialize result to 1

    // Calculate factorial of n and store digits in result array
    int i;
    for (i = 1; i <= n; i++) {
        multiply(result, i);
    }

    // Find rightmost non-zero digit in result array
    for (i = MAX_DIGITS - 1; i >= 0; i--) {
        if (result[i] != 0) {
            return result[i];
        }
    }

    // If no non-zero digit found, return 0
    return 0;
}

int main() {
    int n;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Find rightmost non-zero digit of n!
    int digit = findRightmostNonZeroDigit(n);

    // Output result
    printf("The rightmost non-zero digit of %d! is %d\n", n, digit);

    return 0;
}
