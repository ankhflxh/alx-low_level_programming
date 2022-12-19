#include "main.h"
/**
 * puts2 - printing characters of a string
 * @str: pointer to an int that will be changed
 *
 * Return: void
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar (str[b]);
	}
	_putchar ('\n');
}
