#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number to calculate the square root of
  *
  * Return: the natural square root of n, or -1 
  * if n does not have a natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}

/**
  * _sqrt_helper - helper function for _sqrt_recursion
  * @n: the number to calculate the square root of
  * @start: the starting point for the search
  * @end: the ending point for the search
  *
  * Return: the natural square root of n, or -1 if n does not have a natural square root
  */
int _sqrt_helper(int n, int start, int end)
{
int mid;
if (end >= start)
{
mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
return (-1);
}
