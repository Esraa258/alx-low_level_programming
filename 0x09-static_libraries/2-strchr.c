#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @p: pointer to put the constant
 * @c: constant
 * Return: pointer to p
*/

char *_strchr(char *p, char c)
{
	int itr;

	for (itr = 0; p[itr] >= '\0'; itr++)
	{
		if (p[itr] == c)
		{
			return (p + itr);
		}
	}

return ('\0');
}

