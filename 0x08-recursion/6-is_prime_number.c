#include "main.h"
/**
  * is_prime_number - returns 1 if the input integer is
  * a prime number, otherwise returns 0
  * @n: the number to check for primality
  *
  * Return: 1 if n is prime, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{

	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
	}
}
