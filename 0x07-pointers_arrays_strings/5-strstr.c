#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @r: rows.
 * Return: nothing.
*/

void print_chessboard(char (*r)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(r[itr][jtr]);
		}
		_putchar('\n');
	}
}
