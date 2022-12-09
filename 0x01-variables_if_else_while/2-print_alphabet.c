#include <stdio.h>
/**
 * main- prints the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	char alphabetlower = 'a';

	for (alphabetlower = 'a'; alphabetlower <= 'z'; alphabetlower++)
	{
		putchar(alphabetlower);
	}
	putchar('\n');

	return (0);
}
