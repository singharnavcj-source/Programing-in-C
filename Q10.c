#include <stdio.h> 
int main () {
    int s, h, m, remh, remm; 
    printf("Enter time in seconds"); 
    scanf("%d", &s);
    h = s / 3600; 
    remh = s % 3600;
    m = remh / 60; 
    remm = remh % 60;
    printf ("%d seconds in hours:mintues:seconds = %d:%d:%d", s, h, m, remm);
    return 0;
}