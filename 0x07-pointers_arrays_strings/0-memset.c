#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @p: pointer to put the constant
 * @c: constant
 * @n: max bytes to use
 * Return: pointer p
 */

char *_memset(char *p, char c, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		*(p + itr) = c;
	}

	return (p);
}
