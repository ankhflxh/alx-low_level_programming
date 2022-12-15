#include "main.h"
/**
 * print_most_numbers - prints most numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		_putchar('0' + a);
	}
	_putchar('\n');
}
