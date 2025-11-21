#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d", &a, &b);

    if (a == 0) {
        printf("HCF = %d\n", b);
        return 0;
    }
    if (b == 0) {
        printf("HCF = %d\n", a);
        return 0;
    }

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("HCF = %d\n", a);
    return 0;
}
