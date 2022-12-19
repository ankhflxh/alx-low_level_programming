#include "main.h"
/**
 * _strlen - the length of a string
 * @s: pointer to an int that will be chnaged or updated
 *
 * Return: void meaning its correct
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

