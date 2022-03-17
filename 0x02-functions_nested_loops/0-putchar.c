#include "main.h"

/**
 * main - Entry point
 *
 * Retrun: 0 Always (Success)
 */

int main(void)
{

char text[10] = "_putchar";

int i;
/* For loop to print characters */
for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');

/* 0 on Success */
return (0);
}
