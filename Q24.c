#include <stdio.h> 
int main () {
    int bill = 0, a;
    printf("Enter number of units used");
    scanf("%d", &a); 
    if (a <= 100) {
        bill = a * 5;
        printf("Electric bill is Rs%d", bill);
    }
    else if (a <= 200) {
        bill = (100 * 5) + (a - 100) * 7;
        printf("Electric bill is Rs %d", bill);
    }
    else if (a <= 300) {
        bill = (100 * 5) + (100 * 7) + (a - 200) * 10;
        printf("Electric bill is Rs %d", bill); 
    }
    else if (a > 300) {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (a - 300) * 12; 
        printf("Electric bill is Rs%d", bill);
    }
    return 0;
}