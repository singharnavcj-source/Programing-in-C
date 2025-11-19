#include <stdio.h> 
int main () {
    int a, rev=0, num=0, remainder=0; 
    printf("Enter number"); 
    scanf("%d", &a); 
    while (a != 0) {
        remainder = a % 10; 
        rev = rev*10+remainder;
        a=a/10;
    }
    printf("Reversed number is %d", rev);
    return 0;

}