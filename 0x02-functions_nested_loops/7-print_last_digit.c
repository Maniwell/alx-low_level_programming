#include "main.h"
#include <stdlib.h>
/**
  * print_last_digit - prints the last digit of an input
  * integer
  * @num: the integer to be checked
  *
  * Return: if last_digit success
  **/

int print_last_digit(int num)
{
	int abs_num = abs(num);
	int last_digit = abs_num % 10;
	int abs_ld = abs(last_digit);

	_putchar(abs_ld + '0');
	return (abs_ld);
}
