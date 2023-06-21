#include "main.h"
#include <stdio.h>

/**
  * positive_or_negative - The function assigns the values of positive,
  * negative and zero for an input of integer variable i.
  * @i: is an integer input to be checked
  * Return: Always 0 (Success)
  **/

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
