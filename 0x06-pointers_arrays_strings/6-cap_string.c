#include "main.h"
#include <stdio.h>
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
* Return: A pointer to the changed string.
*/
int isLower(char ptr)
{
return (c >= 97 && c <= 122);
}{
int i;
char delimiter[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
	if (c == delimiter[i])
		return (1);
return (0);
}
char *cap_string(char *str)
{
char *ptr = s;
int foundDelimit = 1;
while (*s)
if (isDelimiter(*s))
foundDelimit = 1;
else if (isLower(*s) && foundDelimit)
*s -= 32;
foundDelimit = 0;
else
foundDelimit = 0;
s++;
return (ptr);
}
