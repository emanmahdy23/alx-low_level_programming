#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *@n: input
 * Return: Always 0.
 */
void print_to_98(int n)
{
int num;
if (n > 98)
{
for (num = n; num > 98; num++)
{
printf("%d", num);
}
}
else
{
for (num = n; num < 98; num++)
{
pritf("%d", num);
}
}
}
