#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * positive_or_negative - The function assigns the values of positive,
  * negative and zero for an input of integer variable n.
  * @n: is an integer input to be checked
  * Return: Always 0 (Success)
  **/

void positive_or_negative(int n)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
