#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				return (s);
			}

			k++; /*add k+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
