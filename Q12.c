#include <stdio.h> 
int main () {
    int a; 
    printf("Enter a number"); 
    scanf("%d", &a); 
    if (a>0)
    {
        printf("Number is positive");
    }
    else if(a<0)
    {
        printf("Number is negative");
    }
    else if (a==0)
    {
        printf("Number is neutral");
    }
    return 0;
}