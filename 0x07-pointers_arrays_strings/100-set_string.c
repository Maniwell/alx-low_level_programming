#include "main.h"
/**
  * set_string - sets the value of a pointer to a char
  * @s: pointer to the pointer to be set
  * @to: pointer to the char to set the pointer to
  *
  * Return: void
  */
void set_string(char **s, char *to)
{
	    *s = to;
}
