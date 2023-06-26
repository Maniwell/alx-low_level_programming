#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * if odd len, n = (length_of_the_string - 1) / 2
  * @str: input
  * Return: void
  */
void puts_half(char *str)
{
	int m, n, char_len = 0;

	for (m = 0; str[m] != '\0'; m++)
	char_len++;
	n = (char_len  / 2);
	if ((char_len  % 2) == 1)
	n = ((char_len  + 1) / 2);
	for (m = n; str[m] != '\0'; m++)
	_putchar(str[m]);
	_putchar('\n');
}
