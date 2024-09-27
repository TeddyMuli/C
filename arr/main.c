#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,i;
    int arr[10];
    length=sizeof arr/ sizeof(arr[0]);
    printf("Enter 10 numbers: ");
    for(int i=0;i<length;i++){
    scanf("%d",&arr[i]);
    }
    printf("The nos are: ");
    for(i=0;i<length;i++)
    {
        printf("%2.0d",arr[i]);
    }


    return 0;
}
