#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @p: pointer to put the constant
 * @c: constant
 * @m: max bytes to use
 * Return: pointer p
*/

char *_memset(char *p, char c, unsigned int m)
{
	unsigned int a;

	for (a = 0; m > 0; a++, m--)
	{
		p[a] = c;
	}

	return (p);
}
