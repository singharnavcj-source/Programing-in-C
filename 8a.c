#include <stdio.h>

int main() {
    int int_var = 10;
    float float_var = 3.14f;
    char char_var = 'A';

    int *int_ptr = &int_var;
    float *float_ptr = &float_var;
    char *char_ptr = &char_var;

    printf("--- Integer Pointer ---\n");
    printf("Address stored in int_ptr: %p\n", (void *)int_ptr);
    printf("Value pointed to by int_ptr: %d\n", *int_ptr);
    printf("Address of int_var: %p\n", (void *)&int_var);
    printf("Value of int_var: %d\n\n", int_var);

    printf("--- Float Pointer ---\n");
    printf("Address stored in float_ptr: %p\n", (void *)float_ptr);
    printf("Value pointed to by float_ptr: %.2f\n", *float_ptr);
    printf("Address of float_var: %p\n", (void *)&float_var);
    printf("Value of float_var: %.2f\n\n", float_var);

    printf("--- Char Pointer ---\n");
    printf("Address stored in char_ptr: %p\n", (void *)char_ptr);
    printf("Value pointed to by char_ptr: %c\n", *char_ptr);
    printf("Address of char_var: %p\n", (void *)&char_var);
    printf("Value of char_var: %c\n\n", char_var);

    return 0;
}