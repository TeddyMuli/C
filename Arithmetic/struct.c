#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct
{
    char name[50];
    char number[50];

}
person;


int main()
{
    char names[50];
    person people[2];

    people[0].name="Teddy";
    people[0].number="0799-957-459";

    people[1].name="Muli";
    people[1].number="0778-372-516";

    printf("Enter the name: ");
    scanf("%s",&names);
    for(int i=0;int<=length;i++)
    {
        if(strcmp(people[i].name,name)==0)
            printf("Found %s",people[i].number);
        return 0;
    }
    printf("Not found");
    return 1;
}
