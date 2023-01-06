#include "main.h"
/**
 * _strcat - function that concatenates two srings
 * @dest: a pointer to destination string
 * @src: a pointer to source string
 *
 * Return: a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int length, k;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (k = 0; src[k] != '\0'; k++, length++)
	{
		dest[length] = src[k];
	}
	dest[length] = '\0';

	return (dest);
}
