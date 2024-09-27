#include <stdio.h>
//code to check for duplicate numbers in an array.
int main()
{
    //Initialize array
    int arr[10] = {1, 2, 3, 4, 2, 7, 8, 8, 3};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);
    //printf("%d",length);
    printf("Duplicate elements in given array: \n");
    //Searches for duplicate element
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] == arr[j])
               // int num = count (arr[j]);
                printf("%d\n", arr[j]);
        }
    }
    return 0;
}
