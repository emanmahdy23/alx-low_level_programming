#include "main.h"
/**
 * print_square - function that prints a square
 * @size: is the size of the square
 * Return: Always 0
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int num1;
int num2;
for (num1 = 1; num1 <= size; num1++)
{
for (num2 = 1; num2 <= size; num2++)
{
_putchar ('#');
_putchar ('\n');
}
}
}
}
