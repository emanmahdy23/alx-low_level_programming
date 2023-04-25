#include "main.h"
/**
* print_last_digit - that prints the last digit of a number.
* @n : takes number input
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int last;
if (n < 0)
{
last = -1 * (n % 10);
}
else
last = n % 10;
_putchar(last + 48);
return (last);
}

