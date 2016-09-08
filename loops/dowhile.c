#include<stdio.h>
char* getInput();
main()
{
char optionInput;
char option;
do
	{
        //option = getInput();
printf("%s",getInput());
	}
while((getInput() != NULL) && (getInput() == '\0'));
}
char* getInput()
{
char *option;
printf("\nPlease enter 'y' or 'n':\t");
scanf("%[^\n]%*c",option);
while(getchar() != '\n');
//fgets(option, sizeof(option), stdin);
printf("\n");
return option;
}
