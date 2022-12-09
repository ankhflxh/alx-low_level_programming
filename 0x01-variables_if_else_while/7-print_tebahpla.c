#include <stdio.h>
/**
 * main- prints lowcase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char rev = 'z';

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);

	putchar('\n');

	return (0);
}
