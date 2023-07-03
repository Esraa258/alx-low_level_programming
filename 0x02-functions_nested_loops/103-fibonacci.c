#include"main.h"

/**
 * main - Entry pont
 *
 * Description: Prints the sum of even-valued
 *              Fibronacci sequence not exceed 4 million
 *
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float unsigned_int;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			unsigned_int += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("ul%\n", unsigned int);

	return (0);
}
