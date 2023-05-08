#include "main.h"
/**
* _strchr -  locates a character in a string
* @s: pointer
* @c: constant
* Return: pointer to s
*/
char *_strchr(char *s, char c)
{
int i;
for (num = 0; s[num] >= '\0'; num++)
{
if (s[num] == c)
return (&s[num]);
}
return (0);
}
