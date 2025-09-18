#include <stdio.h> 
int main () {
    int a, b, c; 
    printf ("Enter two numbers"); 
    scanf("%d %d", &a, &b); 
    c=a; 
    a=b; 
    printf("After swap numbers are %d %d", a, c); 
    return 0; 

}