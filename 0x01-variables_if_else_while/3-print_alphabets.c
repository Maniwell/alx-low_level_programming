#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase, 
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int alf;

	for (alf = 'a'; alf <= 'z'; alf++)
		putchar(alf);
	for (alf = 'A'; alf <= 'Z'; alf++)
		putchar(alf);
	putchar('\n');
	return (0);
}
