#include "main.h"
/**
  * is_prime_number - returns 1 if the input integer is a prime number, otherwise returns 0
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
		return (_prime_check(n, 2));
	}
}

/**
  * _prime_check - helper function for _is_prime_number
  * @n: the number to check for primality
  * @i: the current divisor to check
  *
  * Return: 1 if n is prime, 0 otherwise
  */
int _prime_check(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_check(n, i + 1));
	}
}
