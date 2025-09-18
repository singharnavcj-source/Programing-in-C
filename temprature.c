#include <stdio.h> 
int main () { 
    int c, f; 
    printf("Enter temprature in celcius"); 
    scanf("%d", &c);
    f=(c*9/5)+32; 
    printf("Temprature in fahrenhiet is %d", f); 
    return 0; 
}