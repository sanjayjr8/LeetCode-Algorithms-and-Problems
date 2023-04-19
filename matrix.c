#include <stdio.h>

int main() {
    int m1[10][10], m2[10][10], result[10][10];
    int m1_rows, m1_cols, m2_rows, m2_cols;

    // Getting input for matrix m1
    printf("Enter number of rows for matrix m1: ");
    scanf("%d", &m1_rows);
    printf("Enter number of columns for matrix m1: ");
    scanf("%d", &m1_cols);
    printf("Enter elements for matrix m1:\n");
    for (int i = 0; i < m1_rows; i++) {
        for (int j = 0; j < m1_cols; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    // Getting input for matrix m2
    printf("Enter number of rows for matrix m2: ");
    scanf("%d", &m2_rows);
    printf("Enter number of columns for matrix m2: ");
    scanf("%d", &m2_cols);
    printf("Enter elements for matrix m2:\n");
    for (int i = 0; i < m2_rows; i++) {
        for (int j = 0; j < m2_cols; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Checking if the matrices can be multiplied
    if (m1_cols != m2_rows) {
        printf("Error: matrices cannot be multiplied.\n");
        return 0;
    }

    // Multiplying matrices m1 and m2 and storing the result in matrix result
    for (int i = 0; i < m1_rows; i++) {
        for (int j = 0; j < m2_cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m1_cols; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Printing the result matrix
    printf("Result matrix is:\n");
    for (int i = 0; i < m1_rows; i++) {
        for (int j = 0; j < m2_cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
