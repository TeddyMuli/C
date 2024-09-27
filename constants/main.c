#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[20];
    printf("Enter your name:");
    scanf("%s", &Name);
    /*fgets(Name,20,stdin);*/
    printf("Welcome %s,enter your year of birth:",Name);
    const int year=2022;
    int age;
    int yob; //yob-year of birth
   /* printf("Enter your year of birth:");*/
    scanf("%d",&yob);
    age=year-yob;
    printf("%s ,you are %d years old",Name,age);

    return 0;
}
