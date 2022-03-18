#include "main.h"

/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int mult, res, num;

if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; ++num)
{
_putchar(48);
for (mult = 1; mult <= n; ++mult)
{
_putchar(',');
_putchar(' ');

res = num * mult;

if (res <= 9)
_putchar(' ');
if (res <= 99)
_putchar(' ');

if (res >= 100)
{
_putchar((res / 100) + 48);
_putchar((res / 10) % 10 + 48);
}
else if (res <= 99 && res >= 10)
_putchar((res / 10) + 48);
_putchar((res % 10) + 48);
}
_putchar('\n');
}
}
}
