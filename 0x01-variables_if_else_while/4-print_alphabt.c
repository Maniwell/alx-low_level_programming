#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line, except q and e
* Return: Aways 0 (Sucess)
*/
int main(void)
{
	char alf = 'a';

	while (alf <= 'z')
	{
		if (alf != 'e' && alf != 'q')
		{
			putchar(alf);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
