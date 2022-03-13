#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Seccuss)
*/
int main(void)
{

char ch;
char str;
/* For loop to print the alphabet */
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (str = 'A'; str <= 'Z'; str++)
{
putchar(str);
}
putchar('\n');

return (0);
}
