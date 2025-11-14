#include <stdio.h>
int main () {
    int sp, cp, loss, profit;
    printf("Enter selling price");
    scanf("%d", &sp);
    printf("Enter cost price");
    scanf("%d", &cp);
    if (sp > cp) {
        profit = (sp / cp)*100;
        printf("Profit percentage is %d", profit);
    }
    else if(cp > sp) {
        loss = (cp / sp)*100; 
        printf("Loss percentage is %d", loss);
    }
    else {
        printf("It is breakeven");
    }
    return 0;
}