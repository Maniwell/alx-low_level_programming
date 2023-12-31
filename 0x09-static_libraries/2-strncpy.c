#include "main.h"
/**
  * _strncpy - copies a string
  * @dest: destination of copied string
  * @src: source of copied string
  * @n: byte of copied string
  * Return: char dest (success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
