#include "main.h"
/**
 * _puts - printing a string
 * @str: pointer to an int that will be changed
 *
 * Return: void meaning the answer is correct
 */

void _puts(char *str)
{
	char *c;
	int g;

	c = str;

	for (g = 0; c[g]; g++)
	{
		_putchar (c[g]);
	}
	_putchar ('\n');
}

