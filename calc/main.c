#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    char op;

    printf("Enter a number:");
    scanf("%lf",&num1);
    printf("Enter an operator:");
    scanf(" %c",&op);
    printf("Enter a number:");
    scanf("%lf",&num2);

    if(op=='+') {
        printf("%lf",num1+num2);
    } else if(op=='-'){
        printf("%lf",num1-num2);
    } else if(op=='/'){
        printf("%lf",num1/num2);
    }else if(op=='*'){
        printf("%lf",num1*num2);
    }else {
        printf("invalid operator");
    }

    return 0;
}
