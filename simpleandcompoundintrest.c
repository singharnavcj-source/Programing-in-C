#include <stdio.h> 
int main () {
    int p, r, t, s, c; 
    printf("Enter principle amount"); 
    scanf("%d", &p); 
    printf("Enter rate"); 
    scanf("%d", &r); 
    printf("Enter time"); 
    scanf("%d", &t); 
    s=p*r*t/100;
    printf("Simple intrest is %d", s); 
    return 0; 
}