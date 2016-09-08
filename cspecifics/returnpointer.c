#include<stdio.h>
	char* getInput();
main()
{
	char * mystring = getInput();
	printf("%s",mystring);
	}
	char* getInput()
	{
	char array[10];
	char *option;
	printf("\nPlease enter 'y' or 'n':\t");
	scanf("%s",array);
	//option = array;
	while(getchar() != '\n');
	//fgets(option, 100, stdin);
	//printf("%s", option);
	//printf("\n");
	return array;
}
