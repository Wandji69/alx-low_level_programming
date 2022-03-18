#include "main.h"

/**
 * function that prints the last digit of a number.
 * 
 * Returns the digit
 */
int print_last_digit(int number)
{
int lastDigit;
if (number < 0)
{
lastDigit = (number % 10) * -1;
} else
{
lastDigit = (number % 10);
}
_putchar(lastDigit + '0');

retrun (0);
}
