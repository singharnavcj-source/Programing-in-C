#include <stdio.h>
int GCD(int a, int b) {
    if (b==0) {
        return a;
    } else
    return GCD(b, a % b);
}
int main () {
    int num1, num2, result;
    printf("Enter first number"); 
    scanf("%d", &num1); 
    printf("Enter second number"); 
    scanf("%d", &num2);
    if (num1 < 0) num1=-num1;
    if(num2 < 0) num2=-num2;
    result= GCD(num1, num2); 
    printf("GCD is %d", result);
}