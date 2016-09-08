#include<stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	printf("Number of arguments passed to the program is: %d\n",argc);
	printf("The arguments are:\n");
	for(i = 0; i < argc; i++)
	{
	printf("%s\n",argv[i]);
	}
}
