#include <stdio.h>
/**
 * main- hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int num3 = '0';
	char hex = 'a';

	for (num3 = '0'; num3 <= '9; num3++)
		putchar(num3);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);

	putchar('\n');
	return (0);
}
