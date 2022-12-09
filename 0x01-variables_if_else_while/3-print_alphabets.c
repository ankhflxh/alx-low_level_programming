#include <stdio.h>
/**
 * main- Print alphabet in lower and uppercase
 *
 * Return: 0
*/
int main(void)
{
	char alphabetlower = 'a';
	char alphabetupper = 'A';

	for (alphabetlower = 'a'; alphabetlower <= 'z'; alphabetlower++)
		putchar(alphabetlower);
	for (alphabetupper = 'A'; alphabetupper <= 'Z'; alphabetupper++)
		putchar(alphabetupper);
	putchar('\n');
	return (0);
}
