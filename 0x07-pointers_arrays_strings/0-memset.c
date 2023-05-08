#include "main.h"
/**
* _memset - fill a block of memory with a specific value
* @s: pointer to the constant
* @b: constant
* @n: max bytes to use 
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int num;
for (num = 0; n > 0; num++)
{
s[num] = b;
n--;
}
return (s);
}
