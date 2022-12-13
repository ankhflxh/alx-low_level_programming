#include "main.h"
/**
 * print_alphabet_x10 - a function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, m;

	for (m = 0; m <= 9; m++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
