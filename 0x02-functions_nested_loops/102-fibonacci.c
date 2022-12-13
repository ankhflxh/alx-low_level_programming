#include <stdio.h>
/**
 * main - main function
 *
 * Return: none
 */
int main(void)
{
	int count = 2;
	long int m = 1;
	long int n = m + 1;
	long int o = m + n;

	printf("%ld, %ld, ", m, n);
	while (count < 50)
	{
		printf("%ld", o);
		count++;
		m = n;
		n = o;
		o = m + n;
		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

