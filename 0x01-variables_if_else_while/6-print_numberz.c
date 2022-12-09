#include <stdio.h>
/**
 * main- Prints base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int num2 = '0';

	for (num2 = '0'; num2 <= '9'; num2++)
		putchar(num2);

	putchar('\n');
	return (0);
}
