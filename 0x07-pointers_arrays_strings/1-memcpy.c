#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int c = 0;

	while (c < n)
	{
		*(dest + c) = *(src + c); /*add 1 position dest and src*/
		c++;

	}


	return (dest);
}
