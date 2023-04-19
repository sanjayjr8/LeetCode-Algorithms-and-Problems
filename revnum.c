#include <stdio.h>

void reverseNum(int* num) {
    int reversed = 0;

    while (*num != 0) {
        int digit = *num % 10;
        reversed = reversed * 10 + digit;
        *num /= 10;
    }

    *num = reversed;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);

    reverseNum(&num);

    printf("Reversed number: %d\n", num);

    return 0;
}
