#include <stdio.h>

/**
 * main - entry point
 *
 * Description: write a program that prints all possible
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int firstDigit = 0, seconDigit;
while (firstDigit <= 99)
{
sconDigit = firstDigit;
while (seconDigit <= 99)
{
if (seconDigit != firstDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
if (firstDigit != 98 || seconDigit != 99)
{
putchar(',');
putchar(' ');
}
}
seconDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}
