#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @p: pointer to put the constant
 * @s: constant
 * @m: max bytes to use
 * Return: pointer p
*/

char *_memset(char *p, char s, unsigned int m)
{
	unsigned int itr;

	for (itr = 0; m > 0; itr++, m--)
	{
		[itr] = s;
	}

	return (p);
}
