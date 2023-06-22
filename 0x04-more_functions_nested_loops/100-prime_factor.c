#include <stdio.h>

int main(void)
{
	long long n = 612852475143;
	long long i, maxPrime;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	printf("The largest prime factor of %lld is %lld\n", 612852475143, maxPrime);

	return 0;
}
