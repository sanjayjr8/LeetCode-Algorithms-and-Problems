#include <stdio.h>

float power(float x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n == 1) {
        return x;
    } else if (n < 0) {
        return 1.0 / power(x, -n);
    } else if (n % 2 == 0) {
        float y = power(x, n/2);
        return y * y;
    } else {
        return x * power(x, n-1);
    }
}

int main() {
    float x, y;
    int n;

    // Input values for x and n
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for n: ");
    scanf("%d", &n);

    // Compute x^n using power function
    y = power(x, n);

    // Output result
    printf("%f^%d = %f\n", x, n, y);

    return 0;
}
