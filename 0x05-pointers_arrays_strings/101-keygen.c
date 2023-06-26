#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	char password[7];
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int len = sizeof(charset) - 1;

	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
	password[i] = charset[rand() % len];
	}
	password[6] = '\0';

	return 0;
}
