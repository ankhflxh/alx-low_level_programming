#include "main.h"
/**
 * _strncpy - a function that copies a string
 * at most n bytes of src are copied
 * if length of src is < n, additional null bytes are written to dest
 * to ensre that a total of n bytes are written
 * @dest: a pointer to destination string
 * @src: a pointer to source string
 * @n: a number of bytes to be used
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int countByte;

	for (countByte = 0; countByte < n && src[countByte] != '\0'; countByte++)
		dest[countByte] = src[countByte];
	for (; countByte < n; countByte++)
		dest[countByte] = '\0';

	return (dest);
}
