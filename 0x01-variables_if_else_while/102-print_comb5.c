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
int firstDigit = 0, secondDigit;

while (firstDigit <= 99)
{
scondDigit = firstDigit;
while (secondDigit <= 99)
{
if (secondDigit != firstDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
if (firstDigit != 98 || secondDigit != 99)
{
putchar((secondDigit / 10) + 48);
putchar((secondDigit % 10) + 48);
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
