#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the number of arguments passed into it
  * @argc: number of arguments
  * @argv: array of pointers to those arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
