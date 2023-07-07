#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the name of the program
  * @argc: number of arguments
  * @argv: array of pointers to those arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
