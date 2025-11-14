#include <stdio.h> 
int main () {
    char ch;
    printf("Enter a character");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("It is a capital letter");
    }
    else if (ch >= 'a' && ch >= 'b') {
        printf("It is a lowercase letter");
    }
    else if (ch >= '1' && ch >= '9') {
        printf("It is a digit");
    }
    else {
        printf("It is a special character");
    }
    return 0;
}