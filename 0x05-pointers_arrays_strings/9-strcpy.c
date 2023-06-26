#include "main.h"

/**
  * char *_strcpy - a function that copies the string pointed to by "src"
  * to a buffer pointed to by "dest" with the null byte "\0"
  * @dest: copy to
  * @src: copy from
  * Return: string (character)
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';

	return (dest);
}
