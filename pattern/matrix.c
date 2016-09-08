#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
main()
{
int i,j;
	system("clear");
	for(j = 0; j <= 500000; j++)
	{
		for(i = 65; i <= 70; i++)
		{
					
			printf("%d\n",rand()%500);
			sleep(0.9);
		}
		system("clear");
	}
}
