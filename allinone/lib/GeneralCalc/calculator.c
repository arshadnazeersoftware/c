
#include <stdio.h>
#include "../../headers/calculator.h"
void addition (int a, int b)
{
int sum = a + b;
printf("Sum is %d",sum);
} 

void subtraction(int a, int b)
{
int minus = a - b;
printf("Subtraction is %d.",minus);
}

void multiplication(int a, int b)
{
int product = a * b;
printf("Multiplication is %d.",product);
}

void division(int a, int b)
{
int division = a/b;
printf("Division is %d.",division);
}
