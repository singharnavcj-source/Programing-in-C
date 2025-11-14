#include <stdio.h> 
int main () {
    int a; 
    printf("Enter the percentage"); 
    scanf("%d", &a);
    if (a >= 90 && a <= 100) {
        printf("Grade is A");
    }
    else if (a >= 80 && a <= 89) {
        printf("Grade is B");
    }
    else if(a >= 70 && a<= 79) {
        printf("Grade is C");
    }
    else if (a >= 60 && a <= 69) {
        printf("Grade is D");
    }
    else {
        printf("Grade is F");
    }
    return 0;
}