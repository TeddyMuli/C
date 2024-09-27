#include <stdio.h>

int main(void)
{
int n = 98;
int *p = &n;

*p++;
printf("%d",n);
}
