#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: Always 0.
 */
void jack_bauer(void)
{
int M;
int H;
for (H = 0; H <= 23; H++)
{
for (M = 0; M <= 59; M++)
{
_putchar((H / 10) + 48);
_putchar((H % 10) + 48);
_putchar(':');
_putchar((M / 10) + 48);
_putchar(( M % 10) + 48);
_putchar('\n');
}
}
}
