#include "main.h"
/**
  * _strlen - is a funtion thatreturns the length
  * of a string input
  * @s: string of characters
  * Return: length intiger
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
