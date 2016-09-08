#include<stdio.h>
int main(int argc, char *argv[])
{
	int val = 0x87;
	int *ptr = &val;
	int bitpos = 5;
	int mask;
	mask = 1 << bitpos;
	val = (*ptr | mask);
	printf("%x\n",val);
}
