#include<stdio.h>
int main(int argc, char *argv[])
{
int i=0;
printf("The number of arguments are: %d.",argc-1);
printf("\nThe arguments passed are:\n");
for(i=1; i < argc; i++)
	{
	printf("%s\t",argv[i]);	
	}
printf("\n");
}
