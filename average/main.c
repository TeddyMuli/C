#include <stdio.h>
#include <stdlib.h>
// A program to calculate the average of 5 numbers.
int main()
{
    int n, sum, count;
    float avg;
    count=sum=0;
    printf("Enter 5 numbers: ");
        while(count<5)
        {
            scanf("%d",&n);
            sum=sum+n;
            count++;
        }
        avg=sum/5;
    printf("The average of the 5 numbers is %.2lf",avg);

    return 0;
}
