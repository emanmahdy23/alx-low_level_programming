#include "main.h"
/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
int num1;
int num2;
for (num1 = 0; s[num1] != '\0'; num1++)
for (num2 = 0; accept[num2] != s[num1]; num2++)
if (accept[num2] == '\0')
	return (num2)
return (num2)
}
