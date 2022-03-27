#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 int count;
 unsigned long fib1 = 0, fib2 = 1, sum;

 for (count = 0; count < 50; ++count)
 {
  sum = fib1 + fib2;
  _putchar(sum);

  fib1 = fib2;
  fib2 = sum;

  if (count == 49)
   _putchar('\n');
  else
   _putchar(', ');
 }

 return (0);
}
