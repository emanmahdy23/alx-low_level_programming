#include <stido.h>
#include "main.h"

/**
 * int _isdigit(int c) - function that checks for a digit
 * @c: the input
 *  Return: 1 for digit 0 for otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
