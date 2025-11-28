#include <stdio.h> 
#include <string.h>
struct library
{
    int reg;
    int bookcount;
    char member [50];
    char location [20];
};
int main () {
    struct library member1;
    strcpy(member1.member, "Arnav");
    int bookcount=1001;
    int reg=590022611;
    if(bookcount>1000){
        printf("It is a big library");
    }
    else {
        printf("It is a small library");
    }
}
