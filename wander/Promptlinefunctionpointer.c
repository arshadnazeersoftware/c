/* I want to bring about a design by exploring my reasoning capability*/
#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int main(int argc, char *argv[])
{
	int (*function_pointer)(int,int) = NULL;
	int i = 0, a=0;
	printf("Total arguments: %d\n",argc);
	printf("Arguments at command line:\n");
	for(i = 0; i < argc; i++)
	{
	printf("%s\n",argv[i]);
	}
	for(i = 0; i < argc; i++)
	{
		if(strcmp(argv[i], "addition") == 0)
		{
			function_pointer = &addition;
			a = function_pointer(2,3);
			printf("Addition is: %d\n",a);
		}
		else
		if(strcmp(argv[i],"subtraction")== 0)
		{
			function_pointer = &subtraction;
			a = function_pointer(2,3);
			printf("Subtraction is: %d\n",a);
		}
		else
		if(strcmp(argv[i],"multiplication") == 0)
		{
			function_pointer = &multiplication;
			a = function_pointer(2,3);
			printf("Multiplication is: %d\n",a);
		}
		else
		if(strcmp(argv[i], "division") == 0)
		{
			function_pointer = &division;
			a = function_pointer(2,3);
			printf("Division is: %d\n",a);
		}
	}
};
//Handles addition, subtraction, multiplication, division

int addition(int a, int b)
{
	return a+b;
}

int subtraction(int a, int b)
{
	return a-b;
}

int multiplication(int a, int b)
{
	return a*b;
}

int division(int a, int b)
{
	return a/b;
}
