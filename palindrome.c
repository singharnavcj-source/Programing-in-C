#include <stdio.h>
int main () {
    int a;
    int r;
    int sum=0;
    printf("Enter number");
    scanf("%d", &a);
    for(int i=a;i>0;i=i/10)
    {
        r=i%10;
        sum=sum*10+r;
    }
    if (sum==a) 
    {
        printf("It is a palindrome\n");
    }
    else 
    {
        printf("it is not a palindrome\n");
    }
}