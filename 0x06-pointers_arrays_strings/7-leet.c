#include "main.h"
/**
* leet - a function that encodes a string into 1337.
* @n: string
* Return: string
*/
char *leet(char *n)
{
char cp = n;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i;
while (*n)
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*n == key[i] || *n == key[i] + 32)
*n = value[i] + 48;
}
n++
return (n);
}
