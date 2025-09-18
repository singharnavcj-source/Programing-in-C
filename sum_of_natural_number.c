#include <stdio.h> 
int main () { 
    int a, b=0; 
    printf("Enter a number n"); 
    scanf("%d", &a); 
    for (int i = 1; i <= a; i++) {
      b += i;
    } 
     
    printf("sum of numbers till n is %d", b); 
    return 0;
}