#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - prints numbers,from 0 to 9,without 2 or 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int z;

for (z = 0; z <= 9; z++)
{
if (z == 2 || z == 4)
continue;
_putchar(z + 48);
}
_putchar('\n');
}
