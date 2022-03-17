#include "main.h"

/**
 *
 * Main - Entry point
 *
 * Retrun Always 0 (Success)
 */
int main(void)
{
char text[10] = "_putchar";

int i;

for (i = 0; i < 5; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}
