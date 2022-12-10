#include <stdio.h>
/**
 * main- prints single numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, m, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				if (a < m && m < d)
				{
					putchar(a);
					putchar(m);
					putchar(d);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

