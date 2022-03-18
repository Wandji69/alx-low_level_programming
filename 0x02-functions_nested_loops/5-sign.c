#include "main.h"

/**
 * function that prints the sign of a number.
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43 + 0);
return (1);
}
else if(n == 0)
{
    _putchar(0 + 48);
    return (0);
}
else
{
_putchar(45 + 0);
return (-1);
}
