#include <stdio.h> 
int main () {
    int a, b, c;
    printf("Enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c) {
        printf("%d is the greatest number", a);
    }
    else if (b>a && b>c) {
        printf("%d is the greatest numeber", b);
    }
    else {
        printf("%d is the greatest number", c);
    }
    return 0;
}