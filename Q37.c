#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d", &a, &b);

    x = a;
    y = b;

    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
