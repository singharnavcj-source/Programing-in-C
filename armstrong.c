#include <stdio.h> 
int main (){
    int a;
    int b;
    int c=1;
    int sum=0;
    printf("Enter number");
    scanf("%d", &a); 
    for(int i=a;i>0;i=i/10) {
        b=i%10; 
        c=b*b*b;
        
        sum=sum+c; 
    }
            
            if(sum==a)
            {
                printf("it is a armstrong number");
            }
            else 
            {
                printf("it is not a armstrong number");
    
            }
            return 0;
        }
    