#include "main.h"
/**
 * _strcpy - copies a string pointed by src
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
