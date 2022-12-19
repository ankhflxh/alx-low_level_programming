#include "main.h"
/**
 * puts_half - printing other characters of a string
 * @str: pointer to an int that will change
 *
 * Return: void w
 */

void puts_half(char *str)
{
	int a, lastC;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	lastC = (a + 1) / 2;

	for (a = lastC; str[a]; a++)
	{
		_putchar (str[a]);
	}

	_putchar ('\n');
}
