#include <stdio.h>
/**
 * main- Print lowercase all except q and e
 *
 * Return: 0
*/
int main(void)
{
	char alphalower = 'a';

	for (alphalower = 'a'; alphalower <= 'z'; i++)
	{
		if (alphalower == 'q')
		{
			alphalower++;
		}
		else if (alpahlower == 'e')
		{
			alphalower++;
		}
		else
		{
			putchar(alphalower);
			alphalower++;
		}
	}
	putchar('\n');
	return (0);
}
