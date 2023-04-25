#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Write a function that prints the alphabet from a - z 
 */
void print_alphabet(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
_putchar('\n');
