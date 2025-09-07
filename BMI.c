#include <stdio.h>
int main () {
    int a, b, c;
    printf("Enter your weight");
    scanf("%d", &a);
    printf("Enter your height");
    scanf("%d", &b); 
    c=a/b*b;
    if (c<=15) {
        printf("Starvation"); 
    }
    else if(c<=17.5) {
        printf("Anorexic");
    }
    else if(c<=18.5){
        printf("Underweight"); 
    }
    else if (c<=24.9) {
        printf("Ideal");
    }
    else if (c<=25.9){
        printf("overweight");
    }
    else if (c<=39.9){
        printf("Obese");
    }
    else if (c<40){
        printf("Morbidity disorder"); 
    }
    return 0;
}