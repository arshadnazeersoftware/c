#include<stdio.h>
int main(int argc, char *argv[])
{
	int val = 32745;
	int *p = &val;
	printf("%x\n",val);
	printf("%d\n",val);
	printf("%o\n",val);
	printf("%p\n",&val);
	return 0;
}
