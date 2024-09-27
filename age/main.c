#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define year 2022
    char name[20];
    int yob;
    int age;

    printf("Hi, what is your name?");
    scanf("%s",&name);
    printf("Hi %s which year were you born?",name);
    scanf("%d",&yob);
    age=year-yob;
    printf("%s, you are %d years old",name,age);
    return 0;
}
