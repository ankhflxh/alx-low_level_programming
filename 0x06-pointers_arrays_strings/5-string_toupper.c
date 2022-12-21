#include "main.h"
/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @x: a pointer to string
 *
 * Return: a pointer to uppercase string
 */
char *string_toupper(char *x)
{
	int length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
