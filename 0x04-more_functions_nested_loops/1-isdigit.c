#include "main.h"

/**
 * A function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int n)
{
	if ((n >= 48) && (n <= 57))
		return (1);
	else
		return (0);
}
