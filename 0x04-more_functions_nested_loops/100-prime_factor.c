#include <stdio.h>
#include <math.h>

/**
  * main - Finds and prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long int n;
	long int max;
	long int i;

	/* Initialize variables */
	n = 612852475143;
	max = -1;

	/* Divide by 2 repeatedly */
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	/* Check odd factors up to the square root of n */
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	/* If n is still greater than 2, it is a prime factor */
	if (n > 2)
	max = n;

	/* Print the largest prime factor */
	printf("The largest prime factor of %ld is %ld\n", 612852475143, max);

	return (0);
}
