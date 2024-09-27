#include <stdio.h>
#include <stdlib.h>

int main(){
    double firstnum;
    double secnum;
    double sum;
    printf("Enter the first number:");
    scanf("%lf",&firstnum);
    printf("Enter the second number:");
    scanf("%lf",&secnum);
    sum=firstnum+secnum;
    printf("The sum is %0.2f",sum);
    return 0;
}
