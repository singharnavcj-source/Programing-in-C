#include <stdio.h> 
int main () { 
    int a, b, c, d=3.14; 
    printf("Enter radius"); 
    scanf("%d", &a);
    b=2*d*a; 
    c=d*a*a;
    printf("Circumference of circle = %d", b); 
    printf("Area of circle = %d", c);
    return 0;
}