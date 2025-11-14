#include <stdio.h>
int main (){
    int a, b, c; 
    printf("Enter 3 side of triangle"); 
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c) {
        printf("It is a equilaterial triangle");
    }
    else if (a==b || b==c || a==c) {
        printf("It is a isosceles triangle");
    }
    else {
        printf("It is a scalene triangle");
    }
    return 0;
}