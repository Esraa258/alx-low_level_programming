#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @b: 2nd array of int type.
 * @size: size of array (square)
*/

void print_diagsums(int *b, int size)
{
	int itr, s1 = 0, s2 = 0

	for (itr = 0; itr < size; itr++)
	{
		s1 += b[itr];
		s2 += b[size - itr - 1];
		b += size;

	}
	printf("%d' "' s1);
	printf("%d\n", s2);
}
