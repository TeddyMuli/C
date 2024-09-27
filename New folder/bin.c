#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[],int k,int first,int last)
{
    if (last > first) {
        int mid = (first + last) / 2;

    if (arr[mid] == k)
    {
        return mid;
    }
    else  if (arr[mid] > k)
    {
        return (binary_search(arr,k,first,mid-1));
    }
    else 
        return (binary_search(arr,k,mid+1,last));
    }
    else
        return -1;  
}

int main(void)
{
    int arr[] = {0,1,2,3,4,5};
    int x = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr,x,0,n);

    if (result == -1)
    {
        /* code */
        printf("The element seems not to be in the array\n");
    }
    else
        printf("The element is on index %d", result);
}