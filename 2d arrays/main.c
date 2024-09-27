/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>>
int main()
{
    char input[30];
    char strings[3][100]={"hens","goats","sheep"};
    int length=sizeof(strings)/sizeof(strings[0]);
    printf("Enter a string: ");
    scanf("%s",&input);
    for(int i=0;i<=length;i++)
    {
        if(strcmp(strings[i],input)==0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
