#include "main.h"
/**
 * print_last_digit - Prints the last digigt of a number
 * @n: the number that is in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int digitl = n % 10;

	if (digitl < 0)
		digitl *= -1;

	_putchar(digitl + '0');

	return (digitl);
}
