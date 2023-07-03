#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @arr: 2nd array of int type.
 * @size: size of array (square)
*/

void print_diagsums(int *arr, int size)
{
	int itr, s1 = 0, s2 = 0

	for (itr = 0; itr < size; itr++)
	{
		s1 += arr[itr];
		s2 += arr[size - itr - 1];
		arr += size;

	}
	printf("%d' "' s1);
	printf("%d\n", s2);
}
