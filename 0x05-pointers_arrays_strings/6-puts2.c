#include "main.h"
/**
  * puts2 - function prints only one character out of two
  * starting with the first one
  * @str: string input
  * Return: void
  */
void puts2(char *str)
{
	int char_len = 0;
	int m = 0;
	char *p = str;
	int n;

	while (*p != '\0')
	{
		p++;
		char_len++;
	}
	m = char_len - 1;
	for (n = 0 ; n <= m ; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
