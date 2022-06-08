#include "main.h"
/**
 * _isalpha - checks if an alphabet is a letter
 * @c: The character in ASCII code to be checked
 *
 * Return: 1 if character is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

	_putchar('\n');
}
