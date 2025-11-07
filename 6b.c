#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int main() {
    int num1, num2, result;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    result = gcd(num1, num2);

    printf("The Greatest Common Divisor (GCD) is: %d\n", result);

    return 0;
}