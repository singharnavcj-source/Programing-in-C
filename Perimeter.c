#include <stdio.h> 
int main () {
    int a, b, c;
    printf("Enter length");
    scanf("%d", &a); 
    printf("Enter breath"); 
    scanf("%d", &b);
    c = 2*(a + b); 
    printf("Perimeter of rectangle is %d", c);
    return 0;
}