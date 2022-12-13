#include "main.h"
/**
 * int _isalpha- a function that checks for alphabetic character.
 *
 * @c: is the int that we will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

