#include <stdio.h>
#include "main.h"

/**
 * function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @num: Input number
 * Return Always 0 (Success)
 */
void print_to_98(int num)
{
if (num < 98)
{
while (num <= 98)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
num++;
}
}
else if (num > 98)
{
while (num >= 98)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
num--;
}
}
else
{
printf("98");
}
printf("\n");
}
