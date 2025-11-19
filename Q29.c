#include <stdio.h> 
int main () {
    int n,a=1; 
    printf("Enter n");
    scanf("%d", &n);
    for (int i=n; i>0;i--)
    a *= i; 
    printf("Factorial is %d", a);
    return 0;


}