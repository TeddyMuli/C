#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 int numbers[]={20,50,10,5,100,1,50};
 int length=sizeof(numbers)/sizeof(numbers[0]);
 printf("Number: ");
 scanf("%d",&n);
 for (int i=0;i<length;i++)
 {
     if(numbers[i]==n){
        printf("found\n");
        return 0;
     }
 }
 printf("not found\n");
 return 1;
}
