#include "main.h"
/**
*  print_array - function that prints n element of an array integers
* @a: elements parameter input
* @n: the number of elements of the array 
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
