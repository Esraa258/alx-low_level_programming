#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: Pointer to a memory area
 * @b: constant
 * @n: max byte to use
 *
 * Return: Pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}

