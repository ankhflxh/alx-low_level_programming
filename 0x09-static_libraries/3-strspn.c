#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int a, b;
	int counter = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if (str2[b] == str1[a])
			{
				counter++;
				break;
			}

			b++;    /*add b+1*/
		}

		if (s[a] != accept[b])
		{
			break;
		}

		a++; /*add x+1*/
	}

	return (counter); /*return the value of counter*/
}
