#include "locfun.h"
#include <stdio.h>
#include <unistd.h>
/**
  *main - is a function that prints _putchar
  *Return - if 0 success
  **/
int _putchar(char c);

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	printf("\n");
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

