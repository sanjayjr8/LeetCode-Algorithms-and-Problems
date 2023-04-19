2,5,  #include <stdio.h>

// Recursive function to print numbers from N to 0
void printNtoZero(int N) {
    // Base case: If N is less than 0, return
    if (N < 0) {
        return;
    }
    
    // Print the current number
    printf("%d ", N);
    
    // Recursively call the function with N-1
    printNtoZero(N - 1);
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    printf("Numbers from %d to 0: ", N);
    printNtoZero(N);
    
    return 0;
}
