#include <stdio.h>

#define MAX_SIZE 100

int CheckOddEven(int num) {
    int flag;

    // Check if number is even
    if (num % 2 == 0) {
        flag = 0; // Set flag to 0 for even numbers
    } else {
        flag = 1; // Set flag to 1 for odd numbers
    }

    return flag;
}

int main() {
    int n, i, num, flag, sum_even = 0, sum_odd = 0;
    int arr[MAX_SIZE];

    // Input number of elements and array elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &num);

        // Check if number is odd or even using the CheckOddEven function
        flag = CheckOddEven(num);

        // Add the number to the appropriate sum based on its flag value
        if (flag == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }
    }

    // Output results
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
