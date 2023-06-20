#include "main.h"
/**
  * print_sign - diffrentiates if the input integer is
  * negative, positive or zero
  * @n: interger to be checked
  * Return: 0 (zero), 1 (positive), and -1 (negative)
  **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
