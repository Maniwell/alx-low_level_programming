#include "main.h"
/**
  * print_rev - is a fuction that writes strings in reverse
  * @s: string
  * return: void
  */
void print_rev(char *s)
{
	int char_len = 0;
	int n;

	while (*s != '\0')
	{
		char_len++;
		s++;
	}
	s--;
	for (n = char_len; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
