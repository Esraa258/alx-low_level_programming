#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals
 * @b: pointer to an array
 * @size: size of the array
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
	printf("%d' ", s1);
	printf("%d\n", s2);
}
