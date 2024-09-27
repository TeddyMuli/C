#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int age;
    char course[50];
    double marks;
};

int main()
{
//for(int i=1;i<=3;i++){
    struct Student st1;
    printf("Enter the name: ");
    scanf("%s",&st1.name);

    printf("Enter the age: ");
    scanf("%d",&st1.age);

    printf("Enter the course: ");
    scanf("%s",&st1.course);

    printf("Enter the marks: ");
    scanf("%Lf",&st1.marks);

    printf("%s %d %s %.2lf\n",st1.name,st1.age,st1.course,st1.marks);
//}
    return 0;
}
