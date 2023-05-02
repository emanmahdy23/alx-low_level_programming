#include "main.h"
#include <string.h>
/**
* _strlen - function that returns the length of a string
* @s: string parameter input
* Return: length of string
*/
int _strlen(char *s)
{
int num = 0;
while (*s != '\0')
{
num++;
s++;
}
return (num);
}
