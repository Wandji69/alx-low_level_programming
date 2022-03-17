#include "main.h"

/**
 * main - Entry point
 *
 * Retrun Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
char text[10] = "_putchar";

int i;

for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');

/* 0 on Success */
return (0);
}
