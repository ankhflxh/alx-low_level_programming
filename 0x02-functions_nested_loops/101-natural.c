#include <stdio.h>
/**
 * main - the main function
 *
 * Return: always 0
 */
int main(void)
{
	int m;
	int n = 0;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			n += m;
		}
	}
	printf("%d\n", n);
	return (0);
}
