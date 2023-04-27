#include "main.h"
/**
 * print_triangle - unction that prints a triangle
 * @size: is the size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
int num1;
int num2;
if (size <= 0)
	_putchar ('\n');
else
{
for (num1 = 1; num1 <= size; num1++)
{
for (num2 = 1; num2 <= size; num2++)
{
if ((num1 + num2) <= size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
_putchar('\n');
}
}
}
}
