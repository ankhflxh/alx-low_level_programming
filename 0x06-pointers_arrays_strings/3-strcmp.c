#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a pointer to first string
 * @s2: a pointer to second string
 *
 * Return: value less than 0 if string is less than the other
 * value greater than 0 if string is greater than the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int count, cmpValue;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')

	{
		count++;
	}

	cmpValue = s1[count] - s2[count];
	return (cmpValue);
}
