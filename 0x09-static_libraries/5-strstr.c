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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		return (haystack);
	}

	return (0);
}
