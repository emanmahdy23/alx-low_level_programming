#include "main.h"

/**
  * print_diagonal -   function that draws a diagonal line on the terminal
  *
  * @n: the number of times
  *
  * Return: Always 0.
  */

void print_diagonal(int n)
{
int num1;
int num2;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (num1 = 0; num1 < n; num1++)
{
for (num2 = 0; num2 < num1; num2++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
