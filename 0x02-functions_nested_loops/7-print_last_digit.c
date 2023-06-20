#include "main.h"

/**
  * print_last_digit - prints the last digit of an input
  * integer
  * @num: the integer to be checked
  *
  * Return: if last_digit success
  **/

int print_last_digit(int num)
{
	int abs_ld = abs(num);
	int last_digit = abs_ld % 10;

	return (last_digit + 48);
}
