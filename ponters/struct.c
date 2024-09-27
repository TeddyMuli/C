#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int age;
    char major[50];
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Computer science");
    printf("%f",student1.gpa);
    return 0;
}
