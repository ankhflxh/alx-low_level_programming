#include "main.h"
/**
 * reverse_array - reversing an array
 * @a: a pointer to an array
 * @n: the number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		i = a[count];
		a[count++] = a[n];
		a[n--] = i;
	}
}
