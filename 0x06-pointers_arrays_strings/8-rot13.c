#include "main.h"

/**
 * rot13 - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: decrypted string
 */
char *rot13(char *n)
{
int x, rotc = 13, i = 0;
char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P', 'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f', 's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M', 'Z', 'm', 'z'};

while (n[i] != '\0')
{
for (x = 0; x <= 51; x++)
{
if (n[i] == toswap[x])
{
n[i] = n[i] + rotc;
x = 51;
}
rotc = rotc * -1;
}
i++;
}

return (n);
}
