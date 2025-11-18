#include <stdio.h> 
int main () {
    int n, product=1;
    printf("Enter n");
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    product *= i;
    printf("product of number is %d", product);
    return 0;
}