#include <stdio.h>

#define MAX_SIZE 100

float find_mean(int n, float* arr) {
    float sum = 0.0;
    int i;

    // Compute sum of array elements
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    // Compute mean of array elements
    float mean = sum / n;
    return mean;
}

int main() {
    int n, i;
    float arr[MAX_SIZE];

    // Input number of elements and array elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    // Find mean of array elements
    float mean = find_mean(n, arr);

    // Output result
    printf("Mean of array elements: %.2f\n", mean);

    return 0;
}
