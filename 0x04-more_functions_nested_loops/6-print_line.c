#include "main.h"
#include <stdio.h>

/**
  * print_line -  function that draws a straight line in the terminal
  *
  * @n: the number of times
  * Return: Always 0.
  */

void print_line(int n)
{
int num;

if (num <= 0)
{
_putchar('\n');
}
else
{

for (num = 0; num < n; num++)
_putchar('_');
_putchar('\n');
}
}
