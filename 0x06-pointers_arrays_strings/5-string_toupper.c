#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @n: string to return
* Return: string
*/
char *string_toupper(char *n)
{
int num;
num = 0;
while (n[num] != '\0')
{
if (n[num] >= 'a' && n[num] <= 'z')
n[num] = n[num] - 32;
num++;
}
return (n);
}
