#include <stdio.h>

int main() {
    int num, left, right;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Shift by 1 bit
    left = num << 1;
    right = num >> 1;

    printf("\nLeft Shift (num << 1) = %d", left);
    printf("\nRight Shift (num >> 1) = %d", right);

    return 0;
}