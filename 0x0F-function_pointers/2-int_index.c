#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: the int arrray
 * @size: the array size
 * @cmp: the compare function
 *
 * Return: the integer index
*/

int int_index(index *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i])
				return (i);
			i++;
			}
		return (-1);
}
