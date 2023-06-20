#include <stdio.h>

/**
  * main - prints out all the natural numbers below 1024
  * but not equal to it, that are multiples of 3 or 5.
  *
  * Return: if 0 success.
  **/
int main(void)
{
	int n, sum = 0;
	
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
