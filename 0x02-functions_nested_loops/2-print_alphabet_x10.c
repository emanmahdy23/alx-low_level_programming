#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
int line;
int x;
for (line = 0; line <= 9; line++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
