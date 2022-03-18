#include "main.h"

/**
 * A function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
int column, row;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (column = 1; column <= size; column++)
{
_putchar('#');
for (row = 2; row <= size; row++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
