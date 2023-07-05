#include "main.h"
/**
  * _strlen_recursion - returns the length of a string
  * @s: the string to calculate the length of
  *
  * Return: the length of s
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
  * _palindrome_helper - helper function for _is_palindrome
  * @s: the string to check for palindromicity
  * @start: the starting index for the search
  * @end: the ending index for the search
  *
  * Return: 1 if s is a palindrome, 0 otherwise
  */
int _palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the string to check
  *
  * Return: 1 if s is a palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (_palindrome_helper(s, 0, len - 1));
	}
}
