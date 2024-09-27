#include <stdio.h>
int main(void)
{
    int x[]={1,1,5,6,7,5,3};
    int lenght=sizeof(x)/sizeof(x[0]);
    printf("The duplicate values are: \n");
    for(int i=0;i<=lenght;i++){
    for(int j=i+1;j<lenght;j++)
        {
        if(x[j]==x[i])
        {
           printf("%d\n",x[j]);
        }
    }

    }
        //printf("No duplicate value\n");

    return 0;
}

