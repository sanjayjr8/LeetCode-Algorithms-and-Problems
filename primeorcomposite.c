#include <stdio.h>

void check_prime(int *ptr_num);

int main() {
    int num;

    while (1) {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        check_prime(&num);
    }

    return 0;
}

void check_prime(int *ptr_num) {
    int i, is_prime = 1;

    for (i = 2; i <= *ptr_num / 2; i++) {
        if (*ptr_num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (*ptr_num <= 1) {
        is_prime = 0;
    }

    if (is_prime) {
        printf("%d is a prime number.\n", *ptr_num);
    } else {
        printf("%d is a composite number.\n", *ptr_num);
    }
}
