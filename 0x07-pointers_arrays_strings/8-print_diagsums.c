#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals
 * @p: pointer to an array
 * @size: size of the array
*/

void print_diagsums(int *p, int size)
{
	int a;
	int b = 0;
	int c = 0;

	for (a = 0; a < size; a++)
	{
		b += p[a];
		c += p[size - a - 1];
		p += size;

	}
	printf("%d, ", b);
	printf("%d\n", c);
}
