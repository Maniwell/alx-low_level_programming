#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
   * main - is a funtion that generates random password
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
		int pass[120];
			int i, sum, n;

				sum = 0;

					srand(time(NULL));

						for (i = 0; i < 120; i++)
								{
											pass[i] = rand() % 51;
													sum += (pass[i] + '0');
															putchar(pass[i] + '0');
																	if ((2772 - sum) - '0' < 51)
																				{
n = 2772 - sum - '0';
			sum += n;
																	putchar(n + '0');
																break;
													}
																		}

						    putchar('\n');

						    	return (0);
}
