#include <stdio.h>
/**
 * main- prints the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
