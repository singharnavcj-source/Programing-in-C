#include <stdio.h>

int fibo(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return (fibo(num - 1) + fibo(num - 2));
    }
}

int main() {
    int num, i;

    printf("Enter the number of terms to generate: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Fibonacci sequence up to %d terms:\n", num);

    for (i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}