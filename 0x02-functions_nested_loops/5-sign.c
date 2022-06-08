#include "main.h"
/**
 * print_sign - checks if an alphabet is lowercase
 * @n: The input number
 *
 * Return: 1 if character is lowercase, else 0
 */
int print_sign(int n)
{
	if (n > 0)
		putchar(43);
		return (1);
	else if (n < 0)
		putchar(45);
		return (-1);
	else
		return (0);

	_putchar('\n');
}
