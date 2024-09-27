#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[6]={2,4,3,9,2,6};
    int max=arr[0];
    for (int i=0;i < 6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);



    return 0;
}
