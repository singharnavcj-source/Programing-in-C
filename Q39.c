#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int found_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = (num < 0) ? -num : num;

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 1) {
            product *= digit;
            found_odd = 1;
        }
        n /= 10;
    }

    if (found_odd)
        printf("Product of odd digits: %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
