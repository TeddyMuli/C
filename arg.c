#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{char ls[] = "ls";
	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n",i,argv[i]);
		if (argv[i] == ls)
		{
			printf("List\n");
		}
		else
			printf("No ls\n");
	}
	return 0; 
}
