#include <stdio.h>
/**
 * main- Print lowercase all except q and e
 *
 * Return: 0
*/
int main(void)
{
	char alphabetlower = 'a';

	for (alphabetlower = 'a'; alphabetlower <= 'z';)
	{
		if (alphabetlower == 'q')
		{
			alphabetlower++;
		}
		else if (alphabetlower == 'e')
		{
			alphabetlower++;
		}
		else
		{
			putchar(alphabetlower);
			alphabetlower++;
		}
	}
	putchar('\n');
	return (0);
}
