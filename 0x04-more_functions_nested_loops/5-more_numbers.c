#include "main.h"
/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b >= 10)
				_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
