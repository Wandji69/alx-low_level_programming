#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int ch = 'a';
int i;
for (i = 0; i <= 10; i++)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
