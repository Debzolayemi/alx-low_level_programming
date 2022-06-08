#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: the integer number
 *
 * Return: the last digit
 */
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return(-1);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}
}