#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ANS 5

int main()
{
    int response[SIZE];
 int freq[ANS] = {0};
 int i;
 for(i=0; i< SIZE; i++){
 //printf("Enter 40 numbers\n");
 scanf("%d",&response[i]);
 ++freq[response[i]];
 }
 for(i=0;i<ANS;i++)
 printf("Frequency of %d is %d\n",i,freq[i]);
 }



