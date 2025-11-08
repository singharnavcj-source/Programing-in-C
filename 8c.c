#include <stdio.h>

void modify_values(int *ptr_a, int *ptr_b) {
    printf("\n--- Inside function (before modify) ---\n");
    printf("Address of a: %p, Value of a: %d\n", (void *)ptr_a, *ptr_a);
    printf("Address of b: %p, Value of b: %d\n", (void *)ptr_b, *ptr_b);

    *ptr_a = *ptr_a * 2;
    *ptr_b = *ptr_b + 10;

    printf("\n--- Inside function (after modify) ---\n");
    printf("Address of a: %p, New value of a: %d\n", (void *)ptr_a, *ptr_a);
    printf("Address of b: %p, New value of b: %d\n", (void *)ptr_b, *ptr_b);
}

int main() {
    int a = 5;
    int b = 10;

    printf("--- In main (before call) ---\n");
    printf("Address of a: %p, Value of a: %d\n", (void *)&a, a);
    printf("Address of b: %p, Value of b: %d\n", (void *)&b, b);

    modify_values(&a, &b);

    printf("\n--- In main (after call) ---\n");
    printf("Address of a: %p, Value of a: %d\n", (void *)&a, a);
    printf("Address of b: %p, Value of b: %d\n", (void *)&b, b);

    return 0;
}