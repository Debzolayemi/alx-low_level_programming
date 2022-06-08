#include "main.h"
/**
 * _abs - computes the absolute value of integers
 * @i: integer number
 *
 * Return: absolute number of the integer i
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
