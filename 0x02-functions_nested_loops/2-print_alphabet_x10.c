#include "main.h"
/**
  * print_alphabet_x10 - prints the lower case alphabet ten times
  * on a new line.
  * Return: if 0 success
  **/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int alpha;

		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
