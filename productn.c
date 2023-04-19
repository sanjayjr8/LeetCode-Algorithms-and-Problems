2,4, #include <stdio.h>

// Recursive function to find the product of n floating-point numbers
double findProduct(int n) {
    // Base case: If n is 0, return 1 as the product
    if (n == 0) {
        return 1;
    }
    
    // Recursive call to read the n-th number and multiply with the product of (n-1) numbers
    double num;
    scanf("%lf", &num);
    return num * findProduct(n - 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter %d floating-point numbers: ", n);
    double product = findProduct(n);
    
    printf("Product of %d numbers: %.2lf\n", n, product);
    
    return 0;
}
