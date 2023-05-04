#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
int num1;
int num2;
num1 = 0;
while (dest[num1] != '\0')
{
num1++;
}
num2 = 0;
while (src[num2] != '\0')
{
dest[num1] = src[num2];
num1++;
num2++;
}
dest[num1] = '\0';
return (dest);
}
