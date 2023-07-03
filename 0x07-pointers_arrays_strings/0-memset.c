#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: pointer to the memory area to be filled
  * @b: value to be set (as a character)
  * @n: number of bytes to be filled starting from the pointer
  *
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}

	return (s);
}
