#include "main.h"
/**
 * rev_string - printing  a reverse string
 * @s: pointer to an int
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *start_f, *end_f, f;
	int a, count;
	int length = 0;

	for (a = 0; s[a]; a++)
	{
		length++;
	}
	count = length;

	start_f = s;
	end_f = s;

	for (a = 0; a < count - 1; a++)
	{
		end_f++;
	}
	for (a = 0; a < count / 2; a++)
	{
		f = *end_f;
		*end_f = *start_f;
		*start_f = f;

		start_f++;
		end_f--;
	}
}
