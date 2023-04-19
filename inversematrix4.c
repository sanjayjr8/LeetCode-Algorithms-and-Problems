#include <stdio.h>

int main() {
    int n, i, j, k;
    float a[20][20], temp;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = n; j < 2 * n; j++) {
            if (i == j - n)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i][i] == 0.0) {
            printf("Not possible to get inverse matrix\n");
            return 1;
        }

        for (j = 0; j < n; j++) {
            if (i != j) {
                temp = a[j][i] / a[i][i];
                for (k = 0; k < 2 * n; k++) {
                    a[j][k] -= temp * a[i][k];
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        temp = a[i][i];
        for (j = 0; j < 2 * n; j++) {
            a[i][j] = a[i][j] / temp;
        }
    }

    printf("The inverse matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = n; j < 2 * n; j++) {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
