#include <stdio.h>

void sum_and_avg(int m, int n, int *sum_ptr, double *avg_ptr) {
    int i, sum = 0;
    double avg;

    for (i = m; i <= n; i++) {
        sum += i;
    }

    avg = (double)sum / (n - m + 1);

    *sum_ptr = sum;
    *avg_ptr = avg;
}

int main() {
    int m, n, sum;
    double avg;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum_and_avg(m, n, &sum, &avg);

    printf("Sum of numbers from %d to %d is %d\n", m, n, sum);
    printf("Average of numbers from %d to %d is %.2f\n", m, n, avg);

    return 0;
}
