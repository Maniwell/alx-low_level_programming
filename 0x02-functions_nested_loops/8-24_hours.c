#include "main.h"


void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int min;
		 
		for (min = 0; min < 60; min++)
		{
			_putchar("%02d:%02d", hour, min);
		}
	}
}
