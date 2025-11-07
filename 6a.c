#include <stdio.h>

unsigned long long fact_recursive(int num) {
    if (num < 0) {
        return 0;
    }
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return (unsigned long long)num * fact_recursive(num - 1);
    }
}

unsigned long long fact_iterative(int num) {
    unsigned long long result = 1;
    int i;
    
    if (num < 0) {
        return 0;
    }
    
    for (i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

unsigned long long binomial_coefficient(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    if (r > n / 2) {
        r = n - r;
    }
    
    unsigned long long n_fact = fact_iterative(n);
    unsigned long long r_fact = fact_iterative(r);
    unsigned long long n_minus_r_fact = fact_iterative(n - r);

    if (r_fact == 0 || n_minus_r_fact == 0) {
        return 0;
    }

    return n_fact / (r_fact * n_minus_r_fact);
}

int main() {
    int max_n, n, r;

    printf("Enter max value for n (up to 20): ");
    scanf("%d", &max_n);

    if (max_n < 0 || max_n > 20) {
        printf("Invalid input. Please enter a value between 0 and 20.\n");
        return 1;
    }

    printf("\n--- Binomial Coefficient Table (nCr) ---\n\n");

    for (n = 0; n <= max_n; n++) {
        printf("n = %-2d:  ", n);
        for (r = 0; r <= n; r++) {
            printf("%-10llu ", binomial_coefficient(n, r));
        }
        printf("\n");
    }
    
    printf("\n--- Testing recursive function (e.g., 5!) ---\n");
    printf("5! (recursive) = %llu\n", fact_recursive(5));
    printf("5! (iterative) = %llu\n", fact_iterative(5));


    return 0;
}