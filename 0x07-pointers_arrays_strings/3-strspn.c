#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer to the string to be searched
  * @accept: pointer to the string containing the characters to match
  *
  * Return: number of bytes in the initial segment of s which consist
  * only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *paccept;

	while (*s != '\0')
	{
		paccept = accept;
		while (*paccept != '\0')
		{
			if (*s == *paccept)
			{
				count++;
				break;
			}
			paccept++;
		}
		if (*paccept == '\0')
		{
			break;
		}
		s++;
	}

	return (count);
}
