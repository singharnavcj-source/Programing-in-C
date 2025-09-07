#include <stdio.h>
int main () {
    int a, b, c;
    printf("Enter three side of triangle");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b<=c)||(a+c<=b)||(b+c<=a));{
    printf("Triangle is valid"); 
    }
   if (( a==b)&&(b==c)) {
    printf("Triangle is equilatoral"); 
   }
   else if ((a==b)||(b==c)||(a==c)); {
    printf("Triangle is isosceles"); 
   }
     else if (((a*a)+(b*b)==(c*c)||((b*b)+(c*c)==(a*a)||((a*a)+(c*c)==(b*b)){
    printf("Triangle is right angle triangle");   }
    else {
        printf("triangle is scaline triangle");
    }
