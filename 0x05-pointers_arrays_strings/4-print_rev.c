#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: A pointer to an int that will change
 *
 * Return: void meaning answer is correct
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a = a - 1; a >= 0; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}
