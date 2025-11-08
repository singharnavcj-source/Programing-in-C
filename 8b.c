#include <stdio.h>

int main() {
    int int_arr[] = {10, 20, 30};
    char char_arr[] = {'a', 'b', 'c'};
    double double_arr[] = {1.1, 2.2, 3.3};

    int *int_ptr = int_arr;
    char *char_ptr = char_arr;
    double *double_ptr = double_arr;

    printf("--- Initial Addresses ---\n");
    printf("int_ptr (%p) points to value: %d\n", (void *)int_ptr, *int_ptr);
    printf("char_ptr (%p) points to value: %c\n", (void *)char_ptr, *char_ptr);
    printf("double_ptr (%p) points to value: %.1f\n", (void *)double_ptr, *double_ptr);
    printf("\nsizeof(int) = %lu, sizeof(char) = %lu, sizeof(double) = %lu\n",
           sizeof(int), sizeof(char), sizeof(double));

    int_ptr++;
    char_ptr++;
    double_ptr++;

    printf("\n--- After Increment (ptr++) ---\n");
    printf("int_ptr (%p) points to value: %d\n", (void *)int_ptr, *int_ptr);
    printf("char_ptr (%p) points to value: %c\n", (void *)char_ptr, *char_ptr);
    printf("double_ptr (%p) points to value: %.1f\n", (void *)double_ptr, *double_ptr);

    int_ptr--;
    char_ptr--;
    double_ptr--;

    printf("\n--- After Decrement (ptr--) ---\n");
    printf("int_ptr (%p) points to value: %d\n", (void *)int_ptr, *int_ptr);
    printf("char_ptr (%p) points to value: %c\n", (void *)char_ptr, *char_ptr);
    printf("double_ptr (%p) points to value: %.1f\n", (void *)double_ptr, *double_ptr);

    return 0;
}