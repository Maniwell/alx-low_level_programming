#include "main.h"

/**
  *_islower - checks if the character input is
  * lower case letter of the alphabet
  * @c: is the character to be checked
  * Return: if 1 lowercase(success) or if 0 not lower case
  **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
