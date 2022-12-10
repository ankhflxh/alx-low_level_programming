#include <stdio.h>
/**
 * main- prints single numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 10; a < 20; a++)
	{
		putchar((a % 10) + '0');
		if (a != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
