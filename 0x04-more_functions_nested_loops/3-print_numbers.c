#include "main.h"
#include <stdio.h>

/**
 * void print_numbers(void) - function that prints the numbers, from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
int x;
{
do {
_putchar(x + 48);
x++;
}
while (x >= 0 && x <= 9);
_putchar("\n");
