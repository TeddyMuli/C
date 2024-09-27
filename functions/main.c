#include <stdio.h>
#include <stdlib.h>

/*void sayHi(char name[20], int age) {
    printf("Hello %s, you are %d years old\n",name,age);
}*/

double cube(double num)
{ //parameters
    return num*num*num;
}

int main()
{
    printf("Answer: %f",cube(3.0));
    return 0;
}
