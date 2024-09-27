#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int sum;
    printf("Enter the first number:");
    scanf("%d",&num1);

     printf("Enter the second number:");
     scanf("%d",&num2);

     printf("Enter the third number:");
     scanf("%d",&num3);

     sum=num1+num2+num3;
     printf("The sum of the three numbers is %d",sum);

    return 0;
}
