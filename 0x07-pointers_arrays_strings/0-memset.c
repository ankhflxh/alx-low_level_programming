#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: A pointer block of memory to fill
 *@b: the value to set
 *@n: the bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	/*declaring for loop*/
	for (a = 0; a < n; a++)
	{
		*(s + a) = b; /*add 1 position s*/

	} /*end for*/

	return (s);
}
