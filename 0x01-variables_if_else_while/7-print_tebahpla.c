#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char Str;
for (Str = 'z'; Str >= 'a'; Str--)
{
putchar(Str);
}
putchar('\n');

return (0);
}
