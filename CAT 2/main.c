#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];
    char phonebk[][100]={"Teddy","Muli"};
    char numbers[][100]={"0721356016","0799957459"};
    int length=sizeof(phonebk)/sizeof(phonebk[0]);
    printf("Enter the name: ");
    scanf("%s",&name);
    for(int i=0;i<=length;i++)
    {
        if(strcmp(name,phonebk[i])==0)
        {
            printf("Found %s",numbers[i]);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}
