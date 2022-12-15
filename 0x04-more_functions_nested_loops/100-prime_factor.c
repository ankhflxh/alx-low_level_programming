#include "stdio.h"
/**
 * main - largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int x, i, primef;

	primef = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		primef = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			primef = i;
			x = x / i;
		}
	}
	if (x > 2)
		primef = x;
	printf("%ld\n", primef);
	return (0);
}
