#include <stdio.h> 
int main () {
    int a; 
    printf("Enter number of days in the year");
    scanf("%d", &a); 
    if (a==366) {
        printf("It is a leap year");
    }
    else if (a==365) {
        printf("It is not a leap year");
    }
    return 0;

}