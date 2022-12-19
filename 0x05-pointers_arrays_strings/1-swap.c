#include "main.h"
/**
 * swap_int - to swap the values of two integers a and b
 * @a: A pointer to an int which will be updated
 * @b: B pointer to an int that will be updated
 *
 * Return: void meaning that our answer is correct
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
