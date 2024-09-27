#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int n = 3;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}