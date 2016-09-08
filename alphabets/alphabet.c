#include<stdio.h>
char begin();
char action(char options);
main()
{
int i;
char myoption;
char option;
int continuous;
char continueOption;
printf("Display individual alphabet on key press.\n");
option = begin();
do
    {
	if(option == 'y')
	{
	 printf("Press any key to show up a letter of Alphabets in ascending order.\n");
	 scanf("%c",&myoption);
	 if(myoption != '\0')
	 {
	  for(i=65; i<=90;i++)
	  {
	  getchar();
	  printf("%c",i);
	  //getchar();
	  }
	 }
	}
    }
while(action(option) == 'y');    
}
char begin()
{
char choice;
printf("Do you want to start? Please type 'y' or 'n':\t");
scanf("%c",&choice);
return choice;	
}
char action(char option)
{
	if(option != 'n')
	{
	char actionOption;
	printf("\nDo you want to continue? Please press 'y' or 'n':\t");
	scanf("%c",&actionOption);
	printf("\n");
	return actionOption;
	}
	else
	{
	printf("Terminated\n\n");
	}
}
