#include <stdio.h>
#include <stdlib.h>
int main()
{
    char Name[] = "Teddy";
    int Age = 35;
    printf("There was a man called %s\n", Name);
    printf("He was %d years old\n", Age);
    Age=67;
    printf("He liked the name %s\n", Name);
    printf("He hated being %d\n", Age);
    return 0;
}
