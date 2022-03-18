#include "main.h"

/**
 * function that prints the 9 times table, starting with 0.
 *
 * Retruns times table
 * tim = row. mul = column, res = result
 */
void times_table(void)
{
int tim, mul, res;
for (tim = 0; tim <= 9; tim++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (mul = 1; mul <= 9; mul++)
{
res = (tim * mul);
if ((res / 10) > 0)
{
putchar((res / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((res / 10) + '0');
if (tim < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
