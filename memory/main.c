#include <stdio.h>
#include <stdlib.h>

int main()
{
   float fahr,celsius;
   printf("Fahrenheit to Celsius conversion calculator\n");
   printf("Enter temperature in fahrenheit:");
   scanf("%f",&fahr);
   celsius=5.0*(fahr-32.0)/9.0;
   printf("%.3f degrees Fahrenheit is %.3f degrees celsius",fahr,celsius);
    return 0;
}
