#include <stdio.h> 
int main() {
    int n, c=0; 
    printf("Enter n numbers of term"); 
    scanf("%d", &n); 
    for (int i=1; i<n; i++)
    c += i;
        printf("%d", c);    
    return 0;
}