#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
