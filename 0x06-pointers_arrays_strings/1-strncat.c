#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: input value
* @src: input value
* @n: input value
* Return: pointer to resulting
*/
char *_strncat(char *dest, char *src, int n)
{
int num1 = 0;
int num2 = 0;
while (dest[num1++])
{
num2++;
}
for (num1 = 0; src[num1] && num1 < n; num1++)
{
dest[num2++] = src[num1];
}
return (dest);
}
