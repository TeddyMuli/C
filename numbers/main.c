#include <stdio.h>

int main()
{
    int fac,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fac=1;
    for(int i=0;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("The factorial %d",fac);
}
