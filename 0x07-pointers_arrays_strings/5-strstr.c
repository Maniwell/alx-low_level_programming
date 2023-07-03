#include "main.h"
#include <stddef.h>
/**
  * _strstr - finds the first occurrence of the substring
  *	      needle in the string haystack
  * @haystack: pointer to the string to be searched
  * @needle: pointer to the substring to be located
  *
  * Return: pointer to the beginning of the located substring,
  *         or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *phaystack, *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;
		while (*pneedle != '\0' && *phaystack == *pneedle)
		{
			phaystack++;
			pneedle++;
		}
		if (*pneedle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
