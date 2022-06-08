#include <stdio.h>
/**
 * main - Prints fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%1d, %1d", n1, n2);
	for (c = 0; c < 50; c++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
