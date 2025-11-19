#include <stdio.h>

int main() {
    int a, original, rev = 0, remainder;

    printf("Enter number: ");
    scanf("%d", &a);

    original = a;  // store the original number

    while (a != 0) {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a = a / 10;
    }

    if (rev == original) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome\n", original);
    }

    return 0;
}
