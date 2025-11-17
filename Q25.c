#include <stdio.h> 
int main () {
    int a, b, c, ans=0;
    printf("Enter two mumbers"); 
    scanf("%d %d", &a, &b);
    printf("What you wanna do\n");
    printf("1. add\n");
    printf("2. Subtract\n");
    printf("3. Divide\n");
    printf("4. Multiply\n");
    scanf("%d", &c);
    switch (c) {
        case 1: 
    ans=a+b;
    printf("Sum of numbers is %d", ans);
    break;
    case 2:
    ans= a-b;
    printf("Difference of numbers is %d", ans);
    break;
    case 3:
    ans=a/b;
    printf("Quotient of number is %d", ans);
    break;
    case 4:
    ans=a*b; 
    printf("Product of numbers is %d", ans);
    break;
    }
    return 0;
}