#include "main.h"
#include <ctype.h>

/**
  *_isalpha - checks if the input is in the alphabet
  * @c: is the character to be checked
  * Return: if 1 success or if 0 not in the alphabet
  **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
