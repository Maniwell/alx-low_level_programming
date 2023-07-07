#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: pointer to the string to be searched
  * @accept: pointer to the string containing the characters to match
  *
  * Return: pointer to the byte in s that matches one of the bytes in accept,
  *         or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	char *paccept;

	while (*s != '\0')
	{
		paccept = accept;
		while (*paccept != '\0')
		{
			if (*s == *paccept)
			{
			return (s);
			}
			paccept++;
		}
		s++;
	}

	return (NULL);
}
