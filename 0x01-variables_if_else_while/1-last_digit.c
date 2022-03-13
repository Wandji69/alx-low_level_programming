#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* Last_Digit takes a value num */
int Last_Digit(int num);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int last;
last = Last_Digit(n);
/* call the Last_Digit function to retun the last the number */
if (last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last < 6 && last != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else if (last == 0)
{
	printf("Last digit of %d is %d and is zero\n", n, last);
}

return (0);
}

/* Last_Digit Function of type int */
int Last_Digit(int num)
{
	/* Return  int */
	return (num % 10);
}
