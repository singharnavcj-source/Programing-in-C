#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex read_complex() {
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void write_complex(struct complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

struct complex add_complex(struct complex c1, struct complex c2) {
    struct complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

struct complex subtract_complex(struct complex c1, struct complex c2) {
    struct complex diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}

int main() {
    struct complex num1, num2, sum, diff;

    printf("Enter the first complex number:\n");
    num1 = read_complex();

    printf("\nEnter the second complex number:\n");
    num2 = read_complex();

    printf("\nFirst complex number is: ");
    write_complex(num1);

    printf("Second complex number is: ");
    write_complex(num2);

    sum = add_complex(num1, num2);
    printf("\nAddition Result: ");
    write_complex(sum);

    diff = subtract_complex(num1, num2);
    printf("Subtraction Result: ");
    write_complex(diff);

    return 0;
}