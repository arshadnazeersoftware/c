#include<stdio.h>
void work(int (*operation)(char *));
int say(char *);
int speak(char *);
int tell(char *);
int main(int argc, char *argv[])
{
	//typedef int (*operation)(int,int);
	//operation op = &say;
	work(&say);
	work(&speak);
	work(&tell);
	return 0;
}

void work(int (*operation)())
{
	char mywords[10];
	char *words;
	words = mywords;
	printf("\nPlease convey something: \t");
	scanf("%s",mywords);
	operation(words);
}

int say(char *words)
{
	printf("\nYou have said: %s\n",words);
	return 0;
}

int speak(char *words)
{
	printf("\nYou spoke: %s\n",words);
	return 0;
}

int tell(char *words)
{
	printf("\nYou told: %s\n",words);
	return 0;
}
