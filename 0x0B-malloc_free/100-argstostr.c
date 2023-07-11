#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguments of a program
  * @ac: the number of arguments
  * @av: the arguments
  *
  * Return: a pointer to the concatenated string, or NULL on failure
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int len, i, j, k;

	if (ac == 0 || av == NULL)
	return NULL;
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	return NULL;
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return str;
}
