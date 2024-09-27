#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a = 17;
    int i;
    a = 17;

    /*set*/
    a = a | (1 << 3);
    printf("%d\n",a);
    /*clear*/
    a = a & (~(1 << 4));
    printf("%d\n",a);
    /*read*/
    for (i = 7;i >= 0;i--)
    {
        printf("%d ",(a & (1 << i)) >> i);
    }
    printf("\n");
}