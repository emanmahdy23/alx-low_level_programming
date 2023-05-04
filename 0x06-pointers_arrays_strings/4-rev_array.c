#include "main.h"
/**
* reverse_array - a function reverses an array of integers
* @a: array of integer
* @n: number of elements of array
* Return: void
*/
void reverse_array(int *a, int n)
{
int num1;
int num2;
for (num1 = 0; num1 < n--; num1++)
{
num2 = a[num1];
a[num1] = a[n];
a[n] = num2;
}
}
