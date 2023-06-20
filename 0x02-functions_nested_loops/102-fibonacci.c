#include <stdio.h>

/**
  * main - lists the first one hundred fibonacci numbers starting beginning
  * 1 and 2, each number separated by a comma and followed by a space.
  *
  * Return: Always 0.
  */
int main(void)
{
	int num;
	unsigned long f1 = 0, f2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
