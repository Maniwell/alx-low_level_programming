#include "main.h"

/**
  *main - calls the function print_alphabet to
  * print lower case letters of the alphabet.
  * print_alphabet - writes the lowercase letter of the
  * alphabet
  * Return - if 0 success
  **/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
