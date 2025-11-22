#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }

    first = temp;

    int power = 1;
    for (int i = 0; i < digits; i++)
        power *= 10;

    int middle = (num % power) / 10;

    int swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
